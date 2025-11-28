#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "symtab.h"

static symbol_t *symtab = NULL

symbol_t *create_symbol(char *name, int val) {
	symbol_t *s = malloc(sizeof(symbol_t));
	if(!s) return NULL;

	s->var_name = malloc(strlen(name) +1);
	if(!s->var_name) {
		free(s);
		return NULL
	}
	strcpy(s->var_name,name);

	s->val = val;
	s->next = symtab;
	symtab = s;

	return s;
}

symbol_t *lookup_table (char *variable) {
	for(symbol_t *cur = symtab; cur; cur = cur->next) {
		if(strcmp(cur->var_name, variable) == 0) {
			return cur;
		}
	}
	return NULL;
}

void build_table(char *filename) {}

void dump_table(void){
	printf("SYMBOL TABLE\n");
	for*symbol_t cur = symtab; cur; cur->next) {
		printf("Name: %s, Value: %d\n", cur->var_name, cur->val);
	}
}

void free_table(void) {}
