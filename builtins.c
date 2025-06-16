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

const char* get_os_username(){
    struct passwd *pw = getpwuid(getuid()); 
    if(pw){
        return pw->pw_name; 
    }
    else{
        return "unknown"; 
    }
}

char* get_os_time(){
    static char time_str[100]; 
    time_t now = time(NULL); 
    struct tm *local_time = localtime(&now); 

    if(local_time == NULL){
        return "unknown"; 
    }

    strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", local_time);
    return time_str;
}