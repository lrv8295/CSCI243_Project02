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
