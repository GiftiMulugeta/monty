#ifndef _MONTY_H
#define _MONTY_H
#define _POSIX_C_SOURCE  200809L
#define _GNU_SOURCE
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * struct var_s - struct to contain the main
 * variables of the Monty interpreter
 *   * @queue: flag to determine if in stack vs queue mode
 *
 *    * @stack_len: length of the stack
 *
 */

typedef struct var_s
{
	int queue;

	size_t stack_len;

} var_t;

#define STACK 0
#define QUEUE 1

/* global struct to hold flag for queue and stack length */

extern var_t var;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: intege
 * @prev: points to the previous element of the stack
 * @next: points to the next element of the stack
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;

} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcod
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
stack_t *add_node(stack_t **stack, const int n);
void stack_s(stack_t **stack, unsigned int line_number);
void queue_s(stack_t **stack, unsigned int line_number);
void add_s(stack_t **stack, unsigned int line_number);
void div_s(stack_t **stack, unsigned int line_number);
void mod_s(stack_t **stack, unsigned int line_number);
void mul_s(stack_t **stack, unsigned int line_number);
void sub_s(stack_t **stack, unsigned int line_number);
void push_s(stack_t **stack, unsigned int line_number);
void pall_s(stack_t **stack, unsigned int line_number);
void nop_s(stack_t **stack, unsigned int line_number);
void swap_s(stack_t **stack, unsigned int line_number);
void pint_s(stack_t **stack, unsigned int line_number);
void pchar_s(stack_t **stack, unsigned int line_number);
void pop_s(stack_t **stack, unsigned int line_number);
void pstr_s(stack_t **stack, unsigned int line_number);
void rot1_s(stack_t **stack, unsigned int line_number);
void rotr_s(stack_t **stack, unsigned int line_number);
void get_op(char *op, stack_t **stack, unsigned int line_number);
void stack_f(int stat, void *arg);
void lineptr_f(int stat, void *arg);
void fs_close(int stat, void *arg);
#endif
