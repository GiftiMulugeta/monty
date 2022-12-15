#include "monty.h"
/**
 * add_s - function that adds 2 number
 * @stack: struct argumnet
 * @line_number: aarg
 */
void add_s(stack_t **stack, unsigned int line_number)
{
	int n;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
				"L%u: can't div, stack too short\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	pop_s(stack, line_number);
	(*stack)->n += n;
}
