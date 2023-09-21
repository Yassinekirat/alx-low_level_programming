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

	for (c = 0; cap[c] != '\0'; c++)
	{
		/*checking all conditions*/
		if (cap[c] == ',' || cap[c] == ';' || cap[c] == '.' || cap[c] == '!' ||
		    cap[c] == '?' || cap[c] == '"' || cap[c] == '(' || cap[c] == ')' ||
		    cap[c] == '{' || cap[c] == '}' || cap[c] == ' ' || cap[c] == '\n' ||
		    cap[c] == '\t' || cap[c] == 0)
		{
			if (cap[c + 1] >= 'a' && cap[c + 1] <= 'z')
				cap[c] = cap[c] - 32;
		}
	}
	return (cap);
}
