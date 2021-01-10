#include <stdio.h>

static void func1(void) {
	char *ch = 0;
	*ch = '!'; /* Take that */
}

int main(int argc, char *argv[]) {
	printf("Hello World\n");
	func1();
	return 0;
}
