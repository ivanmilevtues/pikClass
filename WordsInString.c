#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <Windows.h>
#include <stdbool.h>

int main() {
	char s[256], word[30];
	bool InWord = false;
	int i = 0, j = 0, count = 0;
	
	SetConsoleOutputCP(1251);
	puts("Въведете низ");
	fgets(s, 255, stdin);

	while(s[i]) {
		
		if (InWord == false) {
			if (!isspace(s[i])){
				InWord = true;
				word[j++] = s[i];
				}
					else {
						i++;
						continue;
				}

			}
			else {
				if (isspace(s[i])) {
					InWord = false;
					word[j] = '\0';
					count++;
					printf("\nword%d=%s", count, word);
					j = 0;

				}
				else {
					word[j++] = s[i];
				}
			}

			i++;

	}
	printf("\n Брой на думите = %d", count);
	system("pause");


	return 0;
}
