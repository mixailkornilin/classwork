#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
    int element_number;
    double value;
    
    printf("Введите номер элемента (1-4) и его значение:\n");
    printf("1 - радиус R\n");
    printf("2 - диаметр D\n");
    printf("3 - длина окружности L\n");
    printf("4 - площадь круга S\n");
    printf("Номер: ");
    scanf("%d", &element_number);
    printf("Значение: ");
    scanf("%lf", &value);
    
    double R, D, L, S;
    
    switch(element_number) {
        case 1: // Радиус
            R = value;
            break;
        case 2: // Диаметр
            R = value / 2.0;
            break;
        case 3: // Длина окружности
            R = value / (2.0 * PI);
            break;
        case 4: // Площадь круга
            R = sqrt(value / PI);
            break;
        default:
            printf("Ошибка: номер элемента должен быть от 1 до 4!\n");
            return 1;
    }
    
    D = 2.0 * R;
    L = 2.0 * PI * R;
    S = PI * R * R;
    

    printf("\nРезультаты:\n");
    printf("1. Радиус R = %.2f\n", R);
    printf("2. Диаметр D = 2*R = %.2f\n", D);
    printf("3. Длина окружности L = 2*π*R = %.2f\n", L);
    printf("4. Площадь круга S = π*R² = %.2f\n", S);
    
    return 0;
}
