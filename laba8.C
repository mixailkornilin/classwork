#include <stdio.h>

int main() {
    int N;
    
    printf("Введите размер массива N: ");
    scanf("%d", &N);
    
    if (N <= 0) {
        printf("Ошибка: размер массива должен быть положительным!\n");
        return 1;
    }
    
    int A[N];
    

    printf("Введите %d элементов массива:\n", N);
    for (int i = 0; i < N; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }
    

    int max_odd_index;
    int found = 0;
    

    for (int i = 0; i < N; i += 2) {
        max_odd_index = A[i];
        found = 1;
        break;
    }
    

    if (found) {
        for (int i = 2; i < N; i += 2) {
            if (A[i] > max_odd_index) {
                max_odd_index = A[i];
            }
        }
        

        printf("\nМассив: ");
        for (int i = 0; i < N; i++) {
            printf("%d ", A[i]);
        }
        
        printf("\nЭлементы с нечетными номерами (индексы 0,2,4,...): ");
        for (int i = 0; i < N; i += 2) {
            printf("%d ", A[i]);
        }
        
        printf("\nМаксимальный элемент среди них: %d\n", max_odd_index);
    } else {
        printf("В массиве нет элементов с нечетными номерами!\n");
    }
    
    return 0;
}
