#include <stdio.h>

int main(int argc, char *argv[]) {
	char *replaceptr;
	char replacement[500] = "61C is awesome!";

	replaceptr = replacement;
	//printf("%s\n", *replaceptr);
	//printf("%s\n", *replaceptr++);
	printf("%s\n", replacement[0]);
	return 0;
}

