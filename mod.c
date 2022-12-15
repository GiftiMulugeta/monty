#include "monty.h"
/**
 * mod_s - calc mod of 2 num
 * @stack: stack
 * @line_number: number line
 */
void mod_s(stack_t **stack, unsigned int line_number)
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
	if (n == 0)
	{
		dprintf(STDOUT_FILENO,
				"L%u: division by zero\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->n %= n;
}
