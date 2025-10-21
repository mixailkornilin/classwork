#include <stdio.h>

int main() {
    int A, B, C;
    
    printf("Введите 3 числа: ");
    scanf("%d %d %d", &A, &B, &C);
    
    int min;
    
    // Поиск наименьшего числа
    if (A <= B && A <= C) {
        min = A;
    } else if (B <= A && B <= C) {
        min = B;
    } else {
        min = C;
    }
    
    printf("Числа: %d, %d, %d\n", A, B, C);
    printf("Наименьшее число: %d\n", min);
    
    return 0;
}
        
