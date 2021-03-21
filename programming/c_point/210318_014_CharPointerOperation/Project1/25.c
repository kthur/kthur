#include <stdio.h>

int main() {
	int *p;
	p = (int *)3584;
	*p = 156;
	printf("%d", *p);
}