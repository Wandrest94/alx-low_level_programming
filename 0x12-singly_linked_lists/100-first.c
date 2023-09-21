#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
<<<<<<< HEAD
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
=======
 printf("You're beat! and yet, you must allow,\n");
 printf("I bore my house upon my back!\n");
>>>>>>> d83947fbd16b1b3b32144c599f13aaa4d3d8ce2e
}
