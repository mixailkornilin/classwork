#include <stdio.h>

void SortDec3(float *A, float *B, float *C) {
    float temp;  
    
    
    if (*A < *B) {
        temp = *A;
        *A = *B;
        *B = temp;
    }
    
   
    if (*A < *C) {
        temp = *A;
        *A = *C;
        *C = temp;
    }
    
   
    if (*B < *C) {
        temp = *B;
        *B = *C;
        *C = temp;
    }
}

int main() {
    float A1, B1, C1;
    float A2, B2, C2;
    
   
    printf("Введите первый набор из трех чисел (A1 B1 C1): ");
    scanf("%f %f %f", &A1, &B1, &C1);
    
   
    printf("Введите второй набор из трех чисел (A2 B2 C2): ");
    scanf("%f %f %f", &A2, &B2, &C2);
    
    
    printf("\nИсходные данные:\n");
    printf("Первый набор: A1=%.2f, B1=%.2f, C1=%.2f\n", A1, B1, C1);
    printf("Второй набор: A2=%.2f, B2=%.2f, C2=%.2f\n", A2, B2, C2);
    
    
    SortDec3(&A1, &B1, &C1);
    
    
    SortDec3(&A2, &B2, &C2);
    
    
    printf("\nПосле сортировки по убыванию:\n");
    printf("Первый набор: A1=%.2f, B1=%.2f, C1=%.2f\n", A1, B1, C1);
    printf("Второй набор: A2=%.2f, B2=%.2f, C2=%.2f\n", A2, B2, C2);
    
    return 0;
}
