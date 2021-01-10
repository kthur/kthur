#include <stdio.h>

int main() {
	char system;
	int number;

	printf("10진수->16진수 변환 프로그램이다\n" 
		"10진수를 16진수로 바꾸려면 [A]키를 누르고,\n"
		"16진수를 10진수로 바꾸려면 [B] 키를 누르세요.");
	scanf("%c", &system);
	printf("\n\n%c\n\n", system);
	printf("inpust number:");

	if (system == 'A') {
		scanf("%d", &number);
		printf("%x", number);

	} else if (system == 'B') {
		scanf("%x", &number);
		printf("%d", number);
	}

	return 0;

}
