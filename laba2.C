#include <stdio.h>

int main() {
    int number = 123; // Можно изменить на любое трехзначное число
    
    // Разбиваем число на цифры
    int a = number / 100;       // 123 / 100 = 1
    int b = (number / 10) % 10; // 123 / 10 = 12, 12 % 10 = 2
    int c = number % 10;        // 123 % 10 = 3
    
    // Вычисляем сумму и произведение
    int sum = a + b + c;
    int product = a * b * c;
    
    printf("Число: %d\n", number);
    printf("Сумма цифр: %d\n", sum);
    printf("Произведение цифр: %d\n", product);
    
    return 0;
}
