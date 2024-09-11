#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    CURL *curl;
    CURLcode res;
    const char *token = "your_personal_access_token_here"; // Replace with your GitHub token
    const char *data = "{\"name\":\"test-repo\",\"private\":false}"; // JSON data for repository creation

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();
    
    if(curl) {
        struct curl_slist *headers = NULL;
        headers = curl_slist_append(headers, "Content-Type: application/json");
        
        char auth_header[100];
        snprintf(auth_header, sizeof(auth_header), "Authorization: token %s", token);
        headers = curl_slist_append(headers, auth_header);
        
        curl_easy_setopt(curl, CURLOPT_URL, "https://api.github.com/user/repos");
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);

        res = curl_easy_perform(curl);
        
        if(res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }
        
        curl_easy_cleanup(curl);
        curl_slist_free_all(headers);
    }

    curl_global_cleanup();

    return 0;
}

