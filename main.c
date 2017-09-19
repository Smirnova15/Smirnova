#include <stdio.h>

#include "askname.h"

int main(int argc, char **argv)
{
    char first[255], last[255];

    askname(first, last);

<<<<<<< HEAD
    printf("Hello, %s %s!\n", first, last);
=======
    printf("Hello %s!\n", name);
>>>>>>> parent of d856a29... Give a personalized hello
    return 0;
}

