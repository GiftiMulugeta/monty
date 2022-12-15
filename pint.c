#include "monty.h"
/**
 * pint_s - pint
 * @stack: stack
 * @line_number: number line
 */
void pint_s(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	head = *stack;
	if (var.stack_len < 1)
	{
		dprintf(STDOUT_FILENO, "L%u: can't pint, stack empty",
				line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}
