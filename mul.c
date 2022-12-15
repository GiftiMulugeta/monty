#include "monty.h"
/**
 * mul_s - mltiply 2 top num of the stack
 * @stack: stack
 * @line_number: number line
 */

void mul_s(stack_t **stack, unsigned int line_number)
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
	(*stack)->n *= n;
}
