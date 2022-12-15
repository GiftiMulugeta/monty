#include "monty.h"
/**
 * pchar_s - pachr
 * @stack: stack
 * @line_number: line number
 */
void pchar_s(stack_t **stack, unsigned int line_number)
{
	int c;

	if (var.stack_len < 1)
	{
		dprintf(STDOUT_FILENO,
				"L%u: can't pchar, stack empty\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	c = (*stack)->n;
	if (!isascii(c))
	{
		dprintf(STDOUT_FILENO,
				"L%u: can't pchar, value out of range\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", c);
}
