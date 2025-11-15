#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
    int choice;
    double value;
    
    printf("Что у нас известно?\n");
    printf("1 - радиус\n");
    printf("2 - диаметр\n");
    printf("3 - длина окружности\n");
    printf("4 - площадь круга\n");
    printf("Твой выбор: ");
    scanf("%d", &choice);
    
    printf("Введи значение: ");
    scanf("%lf", &value);
    
    // Сначала найдем радиус, от него всё пляшем
    double radius;
    
    if (choice == 1) {
        radius = value;  // тут всё просто
    }
    else if (choice == 2) {
        radius = value / 2.0;  // диаметр пополам
    }
    else if (choice == 3) {
        radius = value / (2.0 * PI);  // из длины окружности
    }
    else if (choice == 4) {
        radius = sqrt(value / PI);  // из площади
    }
    else {
        printf("Такого варианта нет! Выбирай от 1 до 4.\n");
        return 1;
    }
    
    // Теперь считаем всё остальное
    double diameter = 2.0 * radius;
    double length = 2.0 * PI * radius;
    double area = PI * radius * radius;
    
    // Покажем что получилось
    printf("\nВот что у нас вышло:\n");
    printf("Радиус:        %.2f\n", radius);
    printf("Диаметр:       %.2f\n", diameter);
    printf("Длина окружности: %.2f\n", length);
    printf("Площадь круга:    %.2f\n", area);
    
    return 0;
}
