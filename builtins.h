#ifndef BUILTINS_H
#define BUILTINS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pwd.h>
#include <time.h>

//function prototypes
void startup_banner(); 
const char* get_os_username(); 
char *get_os_time(); 

#endif