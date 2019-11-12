#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int start_range, end_range, k, sum = 0, i = 0, input_number;

	do {
		printf("\nStart range:");
		k = scanf("%d", &start_range);
		while (getchar() != '\n');
	} while (k == 0);

	do {
		printf("\nEnd range:");
		k = scanf("%d", &end_range);
		while (getchar() != '\n');
	} while (k == 0 || start_range > end_range);


	while (printf("\nDo you want to conitinue Y/N?"),
		k = getchar(), k != 'N')
	{
		do {
			printf("\nEnter your number:");
			k = scanf("%d", &input_number);
			while (getchar() != '\n');
		} while (k == 0);

		if (input_number > start_range && input_number < end_range && input_number > 0) {
			sum += input_number;
			i++;
		}
	}

	printf("Avrg is: %.2f", (double)sum / i);
	system("pause");
	return 0;
}
