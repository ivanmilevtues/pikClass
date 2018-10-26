#include <stdio.h>
#include <stdlib.h>

int sum_of_even_numbers(int, int);

int main() {    
    int n, a, b, k, num;

    do {
         k  = scanf("%d", &a);
         while(getchar() != '\n');
    } while (k != 1);
    
    do {
         k  = scanf("%d", &b);
         while(getchar() != '\n');
    } while (k != 1);
    
    int sum = 0 , i;
    do {
        do {
            k  = scanf("%d", &num);
            while(getchar() != '\n');
        } while (k == 0);

        if(ferror(stdin)) {
            printf("Error");
            exit(1);           
        } 
        if(k == -1) {
            break;
        }

        if(num > a && num < b && num > 0 && num % 2 == 0) {
            sum += num;
        }

    } while(1);
    
    printf("Sum = %d", sum);
    return 0;
}