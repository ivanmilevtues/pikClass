#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define arr_LENGHT 10


int main() {

	int arr[arr_LENGHT], k, i, max, max_index;
	SetConsoleOutputCP(1251);

	for(i = 0; i < arr_LENGHT; i++)
	do
	{
		printf("\nВъведете arr[%d] = ", i);
		k = scanf("%d", &arr[i]);
		while (getchar() != '\n');
	} while (k == 0);

	for (i = 0; i < arr_LENGHT; i++)
		printf("\narr[%d] = %d", i, arr[i]);

	for (i = 0; i < arr_LENGHT; i++) {
		if (i == 0) {
		
			max = *arr;
			max_index = i;

		}

		if (max < *(arr + i)) {

			max = *(arr + i);
			max_index = i;
		}

	}
		printf("\nmax = %d, пореден номер = %d", max, max_index + 1);

		system("pause");

	return 0;
}
