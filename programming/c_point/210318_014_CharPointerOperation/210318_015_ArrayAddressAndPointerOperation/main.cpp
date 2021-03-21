#include <stdio.h>
#define ARRARY_SIZE(X) sizeof(x)/sizeof(x[0])
int main() {
	int x[10] = { 11, 22, 43, 56, 36,
		73, 45, 66, 98, 0};
	for (int *p = x; *p != 0; p++) printf("%d ", *p);
	printf("\n%d %d", sizeof(x), ARRARY_SIZE(x));
}