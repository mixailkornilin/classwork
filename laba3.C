#include <stdio.h>

int main() {
    int A, B, C;
    
    printf("Введите три целых числа A, B, C: ");
    scanf("%d %d %d", &A, &B, &C);
    
    int result = (A > 0) && (B > 0) && (C > 0);
    
    printf("\nЧисла: A = %d, B = %d, C = %d\n", A, B, C);
    printf("Все числа положительные: %s\n", result ? "ИСТИНА" : "ЛОЖЬ");
    
    return 0;
}
