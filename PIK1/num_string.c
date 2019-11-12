#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1251);
	char word[20];
	int num;
	scanf("%d", &num);
	int i;
	for (i = 0; num != 0; i++) {

		word[i] = '0' + num % 10;
		num /= 10;
	}
	word[i] = '\0';
	printf("%s\n", word);

	// from back to front
	for (int i = 0, j = strlen(word) - 1; i < strlen(word) / 2; i++, j--) {
		char a = word[i];
		word[i] = word[j];
		word[j] = a;
	}
	printf("%s", word);
	system("pause");

	return 0;
}
