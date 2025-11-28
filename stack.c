#include <stdio.h>
#include <stdlib.h>

#include "stack.h"
#include "stack_node"

stack_t *make_stack(void) {
	stack_t *stk = malloc(sizeof(stack_t));
	if(!stk) {
		printf(stderr, "Memory fail in make stack\n");
		exit(EXIT_FAILURE);
	}
	stk->top = NULL;
	return stk;
}

void push(stack_t *stack, void *data) {
	stack_node_t *node = malloc(sizeof(size_node_t));
	if (!(node)) {
		printf(stderr, "memory failure\n");
		exit(EXIT_FAILURE);
	}
}

void *top(stack_t *stack) {
	if(stack->top == NULL) {
		printf(stderr, "Stack error\n");
		exit(EXIT_FAILURE);
	}
	return stack->top->data;
}

void pop(stack_t *stack) {
	if(stack->top == NULL) {
		printf(stderr, "Stack error\n");
		exit(EXIT_FAILURE);
	}

	stack_node_t *old = stack->top;
	stack->top = old->next;
	free(old);
}

int empty_stack(stack_t *stack) {
	return (stack-> top == NULL);
}

void free_stack(stack_t *stack) {
	while(!(empty_stack(stack)){
		pop(stack);
	}
	free(stack);
}
