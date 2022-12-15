#include "monty.h"
/**
 * fs_close - function that lose file
 * @stat: arg
 * @arg: arg
 */

void fs_close(int stat, void *arg)
{
	FILE *fs;

	(void)stat;

	fs = (FILE *) arg;
	fclose(fs);
}
