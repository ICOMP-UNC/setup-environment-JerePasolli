#include <greetings.h>
#include <stdio.h>

#include "dynamic.h"
#include "static.h"


int main(int argc, char* argv[])
{
    printf("Hello world from main!\n");
    greetings();
    printf("Called shared lib from main. I get '%d'\n", dynamic_lib_function("Hello OS 2"));
    printf("Called static lib from main. I get '%d'\n", static_lib_function("Bye OS 2"));
    return 0;
}
