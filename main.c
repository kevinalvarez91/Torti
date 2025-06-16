#include "builtins.h"


int main() {
    startup_banner();

    int line_num = 0;
    const char *usr_name = get_os_username();

    char buffer[1024];

    // First prompt
    printf("%s %d ", usr_name, line_num++);

    // main loop
    while (fgets(buffer, sizeof(buffer), stdin)) {
        // buffer[strcspn(buffer, "\n")] = 0;

        printf("%s %d ", usr_name, line_num++);
    }

    return 0;
}
