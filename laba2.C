#include <stdio.h>

int main() {
    int number = 123;
    
    int a = number / 100;       
    int b = (number / 10) % 10;
    int c = number % 10;
    
    int sum = a + b + c;
    int product = a * b * c;
    
    printf("Число: %d\n", number);
    printf("Сумма цифр: %d\n", sum);
    printf("Произведение цифр: %d\n", product);
    
    return 0;
}
