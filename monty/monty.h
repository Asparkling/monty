#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdlid.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * struct var_s - struct to contain the main variables of the monty interpreter.
 * @queue: flag to determine if in stack vs queue mode
 * @stack_len: length of the stack
 */

typedef struct var_s
{
	int queue
	size_t stack_len;
}var-t;

#define STACK 0
#define QUEUE 1

/**
 *  global struct to hold flag for queue and stack length 
 *  @n: integer
 *  @prev: ponit to the previous element of the stack (or queue)
 *  @next: points to the next element of the stack(or queue)
 *  discription: doubly linked list node structure fo stack, queue, LIFO, FIFO Holberton project
*/

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t

/**
 * strut intruction_s - opcode and its funtion
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function fo stack, queue, LIFO, FIFO Helberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t

void get_op(char *op, stack, unsigned int line_number);
void m_push(char *op, stack, unsigned int line_number);
void m_pall(char *op, stack, unsigned int line_number);
void m_pint(char *op, stack, unsigned int line_number);
void m_pop(char *op, stack, unsigned int line_number);
void m_swap(char *op, stack, unsigned int line_number);
void m_add(char *op, stack, unsigned int line_number);
void m_nod(char *op, stack, unsigned int line_number);
void m_sub(char *op, stack, unsigned int line_number);
void m_mul(char *op, stack, unsigned int line_number);
void m_div(char *op, stack, unsigned int line_number);
void m_mod(char *op, stack, unsigned int line_number);
void rotl(char *op, stack, unsigned int line_number);
void rotr(char *op, stack, unsigned int line_number);
void m_stack(char *op, stack, unsigned int line_number);
void m_queue(char *op, stack, unsigned int line_number);
void m_pchar(char *op, stack, unsigned int line_number);
void m_pstr(char *op, stack, unsigned int line_number);
void free_stack(int status, void *arg);
void m_fs_close(int status, void *arg);
void free_lineptr(int status, void *arg);
void stack_t *add_node(stack_t**stack const int n);

#endif /*_MONTY_H_ */
