#include "monty.h"
/**
 * rotr_s - rots
 * @stack: stack
 * @line_number: number line
 */
void rotr_s(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	if (*stack)
		*stack = (*stack)->prev;
}
