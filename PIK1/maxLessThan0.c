#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int start_range, end_range, k, max, flag = 0, input_number;

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
			scanf("%d", &input_number);
			while (getchar() != '\n');
		} while (k == 0);

		if (flag == 0 && input_number > start_range && input_number < end_range && input_number < 0) {
			max = input_number;
			flag = 1;
		}
		else if (input_number > start_range && input_number < end_range && input_number < 0) {
			if (max < input_number) {
				max = input_number;
			}
		}
	}

	printf("Max is: %d", max);
	system("pause");
	return 0;
}
