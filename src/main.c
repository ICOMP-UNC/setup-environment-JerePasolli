#include <greetings.h>
#include <stdio.h>


int main(int argc, char* argv[])
{
    printf("Hello world from main!\n");
    greetings();
    //printf("Called shared lib from main. I get '%d'\n", shared_lib_function);
    //printf("Called static lib from main. I get '%d'\n", static_lib_function);
    return 0;
}
