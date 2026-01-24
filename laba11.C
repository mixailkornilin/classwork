#include <stdio.h>

int IsPowerN(int K, int N)
{
    
    if (K < 1) {
        return 0;
    }
    
    
    while (K % N == 0) {
        K = K / N;
    }
    
    
    if (K == 1) {
        return 1;  // true
    } else {
        return 0;  // false
    }
}

int main()
{
    int N;
    int number;
    int count = 0;
    
    
    printf("Введите число N (>1): ");
    scanf("%d", &N);
    
    
    if (N <= 1) {
        printf("N должно быть больше 1!\n");
        return 1;
    }
    
    printf("Введите 10 положительных чисел:\n");
    
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &number);
        
        
        if (IsPowerN(number, N)) {
            count++;
        }
    }
    
    
    printf("Количество чисел, являющихся степенями %d: %d\n", N, count);
    
    return 0;
}
