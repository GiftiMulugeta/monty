#include "monty.h"
/**
 * check_digit - check the digit
 * @arg: argument
 * Return: return 0
 */
static int check_digit(char *arg)
{
	int i;

	for (i = 0; arg[i]; i++)
	{
		if (arg[i] == '-' && i == 0)
			continue;

		if (isdigit(arg[i]) == 0)
			return (1);
	}
	return (0);

}
/**
 * push_s - push an integer onto the stack
 *
 *   * @stack: double pointer to the beginning of the stack
 *
 *    * @line_number: script line number
 *
 *     *
 *
 *      * Return: void
 *
 */
void push_s(stack_t **stack, unsigned int line_number)
{
	char *arg;
	int n;

	arg = strtok(NULL, "\n\t\r ");
	if (arg == NULL || check_for_digit(arg))
	{
		dprintf(STDOUT_FILENO,
				"L%u: usage: push integer\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	n = atoi(arg);
	if (!add_node(stack, n))
	{
		dprintf(STDOUT_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	var.stack_len++;
}
