#include <stdio.h>              
#include <math.h>

double factorial(int n,  double *result1) {
        double res = 1;
        for(int i = 1; i <= n; i++) {
            res *= i;
        }
        *result1 = res;
    }

double degree(int n, double x, double *result) {
    double resX = 1;
    int amount = n*2 + 1;
    for(int j = 0; j < amount; j++) {
        resX = resX * x;
    }
    *result = resX;
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
    double sum = 0; // сумма ряда
    int n = 0; 
    int count = 1; // счетчик слагаемых 
    double degreeResult = 1;
    double factorialResult = 1;
    while(fabs(term) >= e) {
        double *res1 = &degreeResult;
        double *res2 = &factorialResult;
        degree(n, -x, res1);
        factorial(2 * n, res2);
        term = *res1/ *res2;
        n++;
        sum += term;
        count++;
    }

    printf("Сумма ряда с точностью e = %lf\n", sum);
    printf("Количество учтенных слогаемых = %d\n", count);
    return 0;
}  
/*



int main() {
    int a = 10;       // Обычная переменная
    int *ptr = &a;    // Указатель на переменную a

    printf("Значение a: %d\n", a);            // Вывод значения переменной a
    printf("Адрес a: %p\n", &a);             // Вывод адреса переменной a
    printf("Адрес, хранимый в ptr: %p\n", ptr); // Указатель ptr хранит адрес a
    printf("Значение через указатель: %d\n", *ptr); // Разыменование указателя
    return 0;
}
*/

   



 