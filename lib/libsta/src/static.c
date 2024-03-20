#include "static.h"
#include <stdio.h>
#include <string.h>

int static_lib_function(char* msg)
{
    printf("I am a static lib that receives '%s', and return its length!", msg);
    return strlen(msg);
}
