#include <stdio.h>

void SortIndex(float A[], int N, int I[]) {
    int i, j, tmp;
    for (i = 0; i < N; i++) I[i] = i;
    
    
    for (i = 0; i < N-1; i++)
        for (j = 0; j < N-i-1; j++)
            if (A[I[j]] > A[I[j+1]]) {
                tmp = I[j];
                I[j] = I[j+1];
                I[j+1] = tmp;
            }
}

int main() {
    float X[] = {3.2, 1.5, 4.7, 2.1};
    int n = 4;
    int I[4];
    
    SortIndex(X, n, I);
    
    printf("Номера элементов по возрастанию: ");
    for (int i = 0; i < n; i++)
        printf("%d ", I[i] + 1);
    
    return 0;
}
