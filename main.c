#include <stdio.h>

int main(int argc, char** argv)
{
    if(argc > 2)
        printf("You have passed more than one argument\n");
    else
        printf("Hello, World!\n");

    return 0;
}
