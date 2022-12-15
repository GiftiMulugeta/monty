#include "monty.h"



/**
 *  * get_op - check op against valid opcodes
 *
 *   * @op: op to check
 *
 *    * @stack: double pointer to the beginnig of the stack
 *
 *     * @line_number: script line number
 *
 *      *
 *
 *       * Return: void
 *
 */
void get_op(char *op, stack_t **stack, unsigned int line_number)
{
	size_t i;
	instruction_t valid_ops[] = {
		{"push", push_s},
		{"pall", pall_s},
		{"pint", pint_s},
		{"pop", pop_s},
		{"swap", swap_s},
		{"add", add_s},
		{"nop", nop_s},
		{"sub", sub_s},
		{"mul", mul_s},
		{"div", div_s},
		{"mod", mod_s},
		{"rotl", rot1_s},
		{"rotr", rotr_s},
		{"stack", stack_s},
		{"queue", queue_s},
		{"pchar", pchar_s},
		{"pstr", pstr_s},
		{NULL, NULL}
	};
	for (i = 0; valid_ops[i].opcode != NULL; i++)
	{
		if (strcmp(valid_ops[i].opcode, op) == 0)
		{
			valid_ops[i].f(stack, line_number);
			return;
		}
	}
	dprintf(STDOUT_FILENO,
			"L%u: unknown instruction %s\n",

			line_number, op);
	exit(EXIT_FAILURE);
}
