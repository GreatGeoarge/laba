#include <stdio.h>
#include <math.h>

int main() {
    long double x, y;
    printf("Введите значение для x и y\n");
    if(scanf("%Lf %Lf", &x, &y) != 2) {
     printf("данные введены не коректно\n");
     return 1;
    } 

    long double r = x*y;

    if(!isnan(r)) {
          if(r < 1 && r > -1) 
               printf("точка попала\n");
           else 
               printf("точка не попала\n");
      } 
      return 0;
}
