#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

// Replace this with your GitHub personal access token
#define GITHUB_TOKEN "YOUR_GITHUB_PERSONAL_ACCESS_TOKEN"

// Callback function to capture the response
static size_t write_callback(void *ptr, size_t size, size_t nmemb, void *stream) {
    size_t response_size = size * nmemb;
    strncat((char *)stream, (char *)ptr, response_size);
    return response_size;
}

int main(void) {
    CURL *curl;
    CURLcode res;
    long response_code;
    char response_data[1024] = {0};

    // GitHub API URL to create a repository
    const char *url = "https://api.github.com/user/repos";

    // JSON data to send in the POST request
    const char *data = "{\"name\":\"C Language\", \"description\":\"A public repository for C programming\", \"private\":false}";

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();

    if(curl) {
        struct curl_slist *headers = NULL;

        // Set the authorization header with your token
        char auth_header[200];
        snprintf(auth_header, sizeof(auth_header), "Authorization: token %s", GITHUB_TOKEN);
        headers = curl_slist_append(headers, auth_header);

        // Set the content type to application/json
        headers = curl_slist_append(headers, "Content-Type: application/json");

        // Set the URL
        curl_easy_setopt(curl, CURLOPT_URL, url);

        // Add the headers
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

        // Set the POST data (JSON body)
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);

        // Capture the response data
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, response_data);

        // Perform the request
        res = curl_easy_perform(curl);

        // Check for errors in the HTTP request
        if (res != CURLE_OK) {
            fprintf(stderr, "Network error: %s\n", curl_easy_strerror(res));
        } else {
            // Get the HTTP response code
            curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);

            if (response_code == 201) {
                // Repository successfully created
                printf("Repository 'C Language' created successfully.\n");
            } else {
                // Handle error based on the response code
                printf("Failed to create repository. HTTP Status Code: %ld\n", response_code);
                printf("Response: %s\n", response_data);  // GitHub might return JSON errors
            }
        }

        // Clean up
        curl_slist_free_all(headers);
        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();
    return 0;
}

