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
    printf("Выбераем что искать: ");
    scanf("%d", &choice);
    
    printf("Введи значение: ");
    scanf("%lf", &value);
    
    
    double radius;
    
    if (choice == 1) {
        radius = value;  
    }
    else if (choice == 2) {
        radius = value / 2.0;  
    }
    else if (choice == 3) {
        radius = value / (2.0 * PI);  
    }
    else if (choice == 4) {
        radius = sqrt(value / PI);  
    }
    else {
        printf("Такого варианта нет! Выбирай от 1 до 4.\n");
        return 1;
    }
    
    
    double diameter = 2.0 * radius;
    double length = 2.0 * PI * radius;
    double area = PI * radius * radius;
    
    
    printf("\nВот что у нас вышло:\n");
    printf("Радиус:        %.2f\n", radius);
    printf("Диаметр:       %.2f\n", diameter);
    printf("Длина окружности: %.2f\n", length);
    printf("Площадь круга:    %.2f\n", area);
    
    return 0;
}
