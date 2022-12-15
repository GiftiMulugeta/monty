#include "monty.h"
/**
 * pstr_s - pstr
 * @stack: stack
 * @line_number: number line
 */
void pstr_s(stack_t **stack, unsigned int line_number)
{
	int c;
	stack_t *tem;
	(void)line_number;

	tem = *stack;
	while (tem != NULL)
	{
		c = tem->n;
		if (!isascii(c) || c == 0)
			break;
		putchar(c);
		tem = tem->next;
		if (tem == *stack)
			break;
	}
	putchar('\n');
}
