#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int sum(int, int);

int main() {
	int a = 3, b = 5, s = 0;

	s = sum(a, b);
	printf("\ns=%d\n", s);
	system("pause");
	


	return 0;
}

int sum(int a1, int b1) {
	int s1;
		s1 = a1 + b1;
	return s1;
}
