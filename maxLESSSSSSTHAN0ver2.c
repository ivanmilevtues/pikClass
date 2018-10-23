#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h>
#include <math.h>

int main()
{
	//SetConsoleOutput(1251);
	int max = 0, num, k, beg, end, flag = 0;

	do {
		printf("\nvuvedi gorna granica:");
		k = scanf("%d", &end);
		while (getchar() != '\n');
	} while (k == 0);

	do {
		printf("\nvuvedi dolna:");
		k = scanf("%d", &beg);
		while (getchar() != '\n');
	} while (k == 0 || beg >= end);

		while (printf("\nend : Y/y"), k = getchar(), k != 'Y' && k != 'y') {
			
			do
			{
				printf("\nVuvedi chislo, ");
				k = scanf("%d", &num);
				while (getchar() != '\n');
			} while (k == 0);
			
			if (flag == 0 && num > beg && num < end && num < 0) {

				max = num;
				flag = 1;
			}
			if (flag == 1 && num > beg && num < end && num < 0 && num > max)
				max = num;
		}
		if (flag == 0)
			printf("\n nqma chisla");

		else
			printf("\n max = %d", max);

		system("pause");

	return 0;
}
