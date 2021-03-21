#include <stdio.h>
int main() {
	int x = 1000;
	int *p = &x;
	int **q = &p;
	printf("%d %d %p %p %p %p\n", *p, **q, &p, *q, &(*q), &q);
}