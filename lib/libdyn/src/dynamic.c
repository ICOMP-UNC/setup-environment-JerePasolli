#include "dynamic.h"
#include <stdio.h>
#include <string.h>

int dynamic_lib_function(char* msg)
{
    printf("I am a dynamic lib that receives '%s', and return its length!", msg);
    return strlen(msg);
}
