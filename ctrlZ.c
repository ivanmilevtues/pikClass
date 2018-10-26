#include <stdio.h>
#include <math.h>

void squeare(int, int, int);

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    squeare(a, b, c);
}

void squeare(int a, int b, int c) {
    double x, x1, x2;
    if(a == 0 && b == 0) {
        printf("Izrodeno uravnenie");
    } else if(a == 0) {
        x = (double)-c / b;
        printf("Lineino uravnenie x = %.2f", x);
    } else if(c == 0) {
        x1 = -b / a;
        x2 = 0;
        printf("Dva korena x1 = %.2f, x2 = %.2f", x1, x2);
    } else {
        double re = -b / (2 * a);
        double d = b* b - 4 * a * c;
        double im = sqrt((double)fabs(d) / (2 * a));
        if(d > 0) {
            x1 = re + im;
            x2 = re + im;
            printf("Dva korena x1 = %.2f, x2 = %.2f", x1, x2);
        } else if(d < 0) {
            printf("(re=%.2f, im=%.2f), (re=%.2f, im=%.2f), \n kompleksni chisla", re, im, re, -im);
        } else {
            x1 = re;
            x2 = x1;
            printf("Dva ednakvi korena x1 = x2 = %.2f", x1);
        }
    }
}