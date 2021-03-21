#include <stdio.h>

int main() {
	FILE *fp;
	fp = open("file1.txt");
	if (fp == NULL)
		printf("opended file1.txt");
	else
		printf("could not open file1.txt");

}