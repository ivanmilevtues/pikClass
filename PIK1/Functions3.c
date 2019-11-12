#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<assert.h>


void input(int *, int);
void output(int *, int);
int getMax(int *, int, int *);

int main() {
	
	int a[100], n, k, max_el, min;

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	do {
		printf("\n n = ");
		k = scanf("%d", &n);
		while (getchar() != '\n');
	} while (k == 0 || n < 1 || n > sizeof(a) / sizeof(int));

		input(a, n);
		output(a, n);
		max_el = getMax(a, n, &min);
		printf("\nmax_el=%d", max_el);
		printf("\nmin_el=%d\n", min);
		system("pause");
	return 0;
}

void input(int *a1, int n1) {
	int i, k;
	for(i = 0; i < n1; i++)
		do {
			printf("\na1[%d]=", i);
			k = scanf("%d", &a1[i]);
			while (getchar() != '\n');
		} while (k == 0);

}

void output(int *a1, int n1) {
	
	int i;
	for (i = 0; i < n1; i++)
		printf("\na[%d]=%d", i, a1[i]);
}

int getMax(int *a1, int n1, int *min1) {
	int max;
	max = *min1 = a1[0];
	for (int i = 1; i < n1; i++) {
		if (a1[i] > max)
			max = a1[i];

		if (a1[i] < *min1)
			*min1 = a1[i];
	}
	return max;
}
