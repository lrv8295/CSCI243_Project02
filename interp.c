#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "interp.h"
#include "symtab.h"


int main(int argc, char *argv[]) {
	char line[MAX_LINE + 1];

	if (argc > 2) {
		printf(stderr, "%s [sym-table]\n, argv[0]);
		return EXIT_FAILURE;
	}

	if (argc ==2) {
		build_table(argc[1]);
	} else {
		build_table(NULL);
	}

	printf("table");
	dump_table();


}
