#include <stdio.h>
#include <malloc.h>
int main() {
	int *p;
	int x;
	scanf_s("%d", &x);
		p = (int *)malloc(x * sizeof(int));

		for (int i = 0; i < x; i++)
			scanf_s("%d", &p[i]);
		for (int i = 0; i < x; i++)
			printf("%d ", p[i]);

}