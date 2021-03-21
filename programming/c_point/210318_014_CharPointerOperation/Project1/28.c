#include <stdio.h>

int main() {
	char x, y, z;

	scanf_s("%c%c%c", &x, &y, &z);
	printf("%c %c %c", x, y, z);
	printf("%p %p %p", &x, &y, &z);
}