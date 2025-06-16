#ifndef BUILTINS_H
#define BUILTINS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pwd.h>

void startup_banner(); 
const char* get_os_username(); 

#endif