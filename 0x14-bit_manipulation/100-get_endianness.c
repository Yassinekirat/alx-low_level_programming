#include "main.h"

/**
* get_endianness -  function that checks the endianness
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned char *p;

	unsigned int i;

	i = 1;
	p = (unsigned char  *) &i;

	return (*p == 1);
}
