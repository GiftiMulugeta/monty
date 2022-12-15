#include "monty.h"
/**
 * div_s - divides the two top ellement of stack
 * @stack: the stack
 * @line_number: line number
 */
void div_s(stack_t **stack, unsigned int line_number)
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
	(*stack)->n /= n;
}
