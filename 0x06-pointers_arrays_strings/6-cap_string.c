#include "main.h"

/**
 * cap_string - capitalizes all words
 *
 * @cap: string to be tested
 *
 *
 * Return: capitalization
 *
 */
char *cap_string(char *cap)
{
	int c;

	for (c = 0; cap[c]; c++)
	{
		for (; !(cap[c] >= 'a' && cap[c] <= 'z'); c++);
			;
		if (cap[c] == ',' || cap[c] == ';' || cap[c] == '.' || cap[c] == '!' ||
		    cap[c] == '?' || cap[c] == '"' || cap[c] == '(' || cap[c] == ')' ||
		    cap[c] == '{' || cap[c] == '}' || cap[c] == ' ' || cap[c] == '\n' ||
		    cap[c] == '\t')
			cap[c] = cap[c] - 32;
	}
	return (cap);
}
