#include <stdio.h>

int main() {
	int x[10] = {11, 22, 43, 56, 36, 73, 45, 66, 98, 0};
	int *p[2];
	p[0] = &x[0]; p[1] = &x[9];
	p[1] = x[9];
	for (; *p[0] != *p[1]; p[0]++)
		printf("%d ", *p[0]);
			
}