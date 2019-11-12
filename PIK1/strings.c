#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <Windows.h>

/* string constants are stored in the static memory
 * You can't char *p = 'a' because 'a' is constant
 * We should use fgets() to input strings
 * scanf reads to \w item while fgets is till new line
 * scanf("%15s", s) -> this means that scanf will read till the 15 line
 *
 *
 * sscanf() -> matches simillarly to regex
 * sprintf(s, "", "", ...) -> again .format() type of printer
 * fgetc() and fputc() -> a char by char read/write
 * All the following methods have a number n for which you want them to execute
 * stcpy(s1, s2) -> will copy but is seg fault vulnarable
 * strncpy(s1, s2, n) -> the num of copied 
 * strcmp(); strcat(); strstr();
 * strdup(); -> creates copy of the string in the dynamic memory
 * strlen();
 * memset(s1, '\0', sizeof());
 */

int main() {
	char string[256], word[50], word_to_compare[50];
	SetConsoleOutputCP(1251);
	do {
		puts("Дума за търсене:");
	} while (fgets(word_to_compare, 50, stdin) == 0);
	do {
		puts("Низ:");
	} while (fgets(string, 256, stdin) == 0);

	bool in_word = false;
	int spaces = 0, j = 0, matches = 0;
	for (int i = 0; i < strlen(string); i++) {
		if (in_word == false) {
			if (isspace(string[i])) {
				spaces++;
			}
			else {
				in_word = true;
				word[j++] = string[i];
			}
		}
		else {
			if (isspace(string[i])) {
				spaces++;
				in_word = false;
				word[j] = '\0';
				printf("\n дума %d = %s", spaces, word);
				if (strncmp(word, word_to_compare, strlen(word_to_compare) -1) == 0) {
					matches++;
				}

				j = 0;
			}
			else {
				word[j++] = string[i];
			}
		}
	}

	printf("\nТърсената дума %s се среща %d пъти.", word_to_compare, matches);
	system("pause");
	return 0;
}
