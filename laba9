#include <stdio.h>

int main() {
    int M, N;
    
    
    printf("Введите количество строк M: ");
    scanf("%d", &M);
    printf("Введите количество столбцов N: ");
    scanf("%d", &N);
    
    
    int matrix[M][N];
    
   
    printf("Введите элементы матрицы:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int found_column = 0;
    
    
    for (int j = 0; j < N; j++) {
        int all_odd = 1; 
        
        
        for (int i = 0; i < M; i++) {
            
            if (matrix[i][j] % 2 == 0) {
                all_odd = 0; 
                break;       
            }
        }
        
        
        if (all_odd == 1) {
            found_column = j + 1; 
            break;               
        }
    }
    
    
    printf("Результат: %d\n", found_column);
    
    return 0;
}
