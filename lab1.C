#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, P;

    printf("Введите катет a: ");
    scanf("%lf", &a);
    
    printf("Введите катет b: ");
    scanf("%lf", &b);
    
    c = sqrt(a*a+b*b);
    P = a + b+ c;
    
    printf("Гипотенуза C = %.2f\n", c);
    printf("Периметр P = %.2f\n", P);
    
    return 0;
}
