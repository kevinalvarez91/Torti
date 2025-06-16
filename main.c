#include "builtins.h"


int main() {
    startup_banner();

    int line_num = 0;
    const char *usr_name = get_os_username();

    char buffer[1024];
    char *time = get_os_time(); 

    // First prompt
    printf("%s %s %d ", usr_name, time, line_num++);

    // main loop
    while (fgets(buffer, sizeof(buffer), stdin)) {
        // buffer[strcspn(buffer, "\n")] = 0;
        time = get_os_time(); 

        printf("%s %s %d ", usr_name, time, line_num++);
    }

    return 0;
}
