#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
<<<<<<< HEAD
    char name[255];
=======
    char first[255], last[255];
>>>>>>> 547169847145751d10299e30fae962487dcac5aa

    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

<<<<<<< HEAD
   
	printf("Hello, %s!\n", name);
	return 0
=======
    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

    printf("Hello %s %s!\n", first, last);
>>>>>>> 547169847145751d10299e30fae962487dcac5aa
    return 0;
}
