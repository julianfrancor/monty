#include "monty.h"
/**
 * _add - adds the top two elements of the stack.
 * If the stack contains less than two elements, handle error
 * with _error(9).
 * @stack: Double pointer to the top of the stack.
 * @line_number: line number of the opcode in the file.
 * Return: void.
 */
void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *new = *stack;

	if (*stack == NULL || stack == NULL || (*stack)->next == NULL)
		_error1(9, line_number);
	new->next->n += new->n;
	*stack = (*new).next;
	(*stack)->prev = NULL;
}
/**
 * _sub - subs the top two elements of the stack.
 * If the stack contains less than two elements, handle error
 * with _error(9).
 * @stack: Double pointer to the top of the stack.
 * @line_number: line number of the opcode in the file.
 * Return: void.
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *new = *stack;

	if (*stack == NULL || stack == NULL || (*stack)->next == NULL)
		_error1(9, line_number);
	new->next->n -= new->n;
	*stack = (*new).next;
	(*stack)->prev = NULL;
}
/**
 * _div - Divides the top two elements of the stack.
 * If the stack contains less than two elements, handle error
 * with _error(9).
 * @stack: Double pointer to the top of the stack.
 * @line_number: line number of the opcode in the file.
 * Return: void.
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *new = *stack;

	if (*stack == NULL || stack == NULL || (*stack)->next == NULL)
		_error1(9, line_number);
	new->next->n /= new->n;
	*stack = (*new).next;
	(*stack)->prev = NULL;
}
/**
 * _mul - Multiples the top two elements of the stack.
 * If the stack contains less than two elements, handle error
 * with _error(9).
 * @stack: Double pointer to the top of the stack.
 * @line_number: line number of the opcode in the file.
 * Return: void.
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *new = *stack;

	if (*stack == NULL || stack == NULL || (*stack)->next == NULL ||
	(*stack)->next == 0)
		_error1(9, line_number);
	new->next->n -= new->n;
	*stack = (*new).next;
	(*stack)->prev = NULL;
}
/**
 * _mod - Modules the top two elements of the stack.
 * If the stack contains less than two elements, handle error
 * with _error(8).
 * @stack: Double pointer to the top of the stack.
 * @line_number: line number of the opcode in the file.
 * Return: void.
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *new = *stack;

	if (*stack == NULL || stack == NULL || (*stack)->next == NULL
	(*stack)->next == 0)
		_error1(9, line_number);
	new->next->n %= new->n;
	*stack = (*new).next;
	(*stack)->prev = NULL;
}
