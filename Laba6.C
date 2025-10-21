#include <stdio.h>

int main() {
    double A;
    int N;
    
    printf("Введите вещественное число A: ");
    scanf("%lf", &A);
    
    printf("Введите целое число N > 0: ");
    scanf("%d", &N);
    
    if (N <= 0) {
        printf("Ошибка: N должно быть больше 0!\n");
        return 1;
    }
    
    double result = 1.0;
    
    for (int i = 0; i < N; i++) {
        result *= A;
    }
    
    printf("%.2f в степени %d = %.6f\n", A, N, result);
    
    return 0;
}
