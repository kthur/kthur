#include <stdio.h>

int main() {
	int x = 1000;
	int *p = &x;
	int **q = &p;
	int ***r = &q;

	printf("%d %d %d", *p, **q, ***r);
}