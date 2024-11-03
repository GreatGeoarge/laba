#include <stdio.h>
#include <math.h>

int main() {
    long double f, x, a, b, c;
    printf("Введите значение для x, a, b, c\n");
    if(scanf("%Lf %Lf %Lf %Lf", &x, &a, &b ,&c) !=4){
        printf("данные введены некоректно\n");
        return 1;
    }
    long double sqx = pow(x,2);
    if(x < 0 && b != 0) {
        f = (a*sqx)+b;
        printf("1 формула\n");
    } else if (x > 0 && b == 0) {
        f = (x-a)/(x-b);
         printf("2 формула\n");
    } else {
        f = x/c;
         printf("3 формула\n");
    }
    printf("%Lf", f);

    return 0;   
}