#include "monty.h"

/**
 * lineptr_f - line pointer
 * @stat: stat
 * @arg: arg
 */
void lineptr_f(int stat, void *arg)
{
	char **lineptr = arg;

	(void)stat;
	if (*lineptr != NULL)
		free(*lineptr);
}
