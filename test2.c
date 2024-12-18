#include <stdio.h>
#include <math.h>

double factorial(int n) {
        double res = 1;
        for(int i = 1; i <= n; i++) {
            res *= i;
        }
        return res;
    }

double degree(int n, double x) {
    double resX = x;
    int amount = n*2 + 1;
    for(int j = 0; j < amount; j++) {
        resX = resX * x;
    }
    return resX;

}

int main() {
    double x,e;
    printf("Введите значение для x\n");
    scanf("%lf", &x);

    printf("Введите значение для точности e ( 0 < e < 1)\n");
    scanf("%lf", &e);

    if(e <= 0 || e >= 1 ) {
        printf("Данные введены неверно\n");
        return 1;
    }

    double term = x; // перове слагаемое
    double sum = term; // сумма ряда
    int n = 0; 
    int count = 1; // счетчик слагаемых 
    
    while(fabs(term) >= e) {
        n++;
        term = degree(n, x)/factorial(2 * n);
        sum += term;
        count++;
    }

    printf("Сумма ряда с точностью e = %lf\n", sum);
    printf("Количество учтенных слогаемых = %d\n", count);
    return 0;
}  


   



