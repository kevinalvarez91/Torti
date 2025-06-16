#include "builtins.h"

void startup_banner(){
        // Bright cyan color
    printf("\033[96m");

    // Exact ASCII art for "Torti"
    printf("  _____          _   _ \n");
    printf(" |_   _|__  _ __| |_(_)\n");
    printf("   | |/ _ \\| '__| __| |\n");
    printf("   | | (_) | |  | |_| |\n");
    printf("   |_|\\___/|_|   \\__|_|\n");
    printf("                       \n");  // Intentional trailing blank line

    // Reset color
    printf("\033[0m");

}