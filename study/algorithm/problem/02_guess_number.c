#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int guess_num, input;
	srand(time(NULL));
	guess_num = rand()%10;

	printf("%d", guess_num);
	while(1) {
		scanf("%d", &input);
		if (input > guess_num)
			printf("larger than guess number");
		else if (input < guess_num)
			printf("smaller than guess number");
		else {
			printf("exact same");
			break;
		}
	}
	return 0;
}
