#include "monty.h"
/* global struct to hold flag for queue and stack length */
var_t var;
/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	stack_t *stack = NULL;
	FILE *fs = NULL;
	unsigned int line_number = 0;
	char *lineptr = NULL, *op = NULL;
	size_t n = 0;

	var.queue = 0;
	var.stack_len = 0;
	if (argc != 2)
	{
		dprintf(STDOUT_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fs = fopen(argv[1], "r");
	if (fs == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	on_exit(lineptr_f, &lineptr);
	on_exit(stack_f, &stack);
	on_exit(fs_close, fs);
	while (getline(&lineptr, &n, fs) != -1)
	{
		line_number++;
		op = strtok(lineptr, "\n\t\r ");
		if (op != NULL && op[0] != '#')
			get_op(op, &stack, line_number);
	}
	exit(EXIT_SUCCESS);
}
