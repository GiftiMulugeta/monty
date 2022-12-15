#include "monty.h"
/**
 * rot1_s - rot 1
 * @stack: number line
 * @line_number: number line
 */
void rot1_s(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack)
		(*stack) = (*stack)->next;
}
