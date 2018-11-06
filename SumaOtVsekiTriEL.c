#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define arr_lenght 10


int main() {





	int arr[arr_lenght], k, i, sum = 0;
	SetConsoleOutputCP(1251);

	

	for(i = 0; i < arr_lenght; i++)
	do
	{
		printf("\nВъведете arr[%d] = ", i);
		k = scanf("%d", &arr[i]);
		while (getchar() != '\n');
	} while (k == 0);


	for (i = 0; i < arr_lenght; i++) {
		
		sum += arr[i];
		if (i % 3 == 2) {

			printf("\n Сумата е %d", sum);
			sum = 0;
		}

	}
		
		system("pause");

	return 0;
}
