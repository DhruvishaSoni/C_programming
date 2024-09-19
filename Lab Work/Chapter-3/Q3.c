#include <stdio.h>
#include <stdlib.h>

void rename_file(const char *old_name, const char *new_name) {
    if (rename(old_name, new_name) == 0) {
        printf("File renamed successfully: %s -> %s\n", old_name, new_name);
    } else {
        perror("Error renaming file");
    }
}

int main() {
    // Sample file names to rename
    const char *old_files[] = {"file1.c", "file2.c", "file3.c"};
    const char *new_files[] = {"lw_3_1_1.c", "lw_3_1_2.c", "lw_3_1_3.c"};

    for (int i = 0; i < 3; i++) {
        rename_file(old_files[i], new_files[i]);
    }

    return 0;
}





