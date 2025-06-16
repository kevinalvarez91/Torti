#include "builtins.h"


int main() {
    startup_banner();

    int line_num = 0;

    printf("USER_NAME_HEAR %d ", line_num);
    line_num++;

    // main loop
    while (1) {
        int input = getchar();
        if (input == '\n') {
            printf("\nUSER_NAME_HEAR %d ", line_num);
            line_num++;
        }
    }

    return 0;
}
