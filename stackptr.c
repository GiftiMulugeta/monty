#include "monty.h"
/**
 * stack_f - stack
 * @stat: status
 * @arg: argument
 */
void stack_f(int stat, void *arg)
{
	stack_t **stack;
	stack_t *next;

	(void)stat;
	stack = (stack_t **)arg;
	if (*stack)
	{
		(*stack)->prev->next = NULL;
		(*stack)->prev = NULL;
	}
	while (*stack != NULL)
	{
		next = (*stack)->next;
		free(*stack);
		*stack = next;
	}
	var.stack_len = 0;
}

