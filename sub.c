#include "monty.h"
/**
 * sub_s - substract 2 numbmers
 * @stack: the given stack
 * @line_number: number line
 */
void sub_s(stack_t **stack, unsigned int line_number)
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
	(*stack)->n -= n;
}
