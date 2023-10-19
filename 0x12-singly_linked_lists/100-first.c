#include <stdio.h>
#include <stddef.h>

/**
 * la_fontaine - function that prints before the main function is executed.
 */

void la_fontaine(void) __attribute((constructor));

void la_fontaine(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
