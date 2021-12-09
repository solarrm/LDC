#include <stdio.h>
#include "Triangle.h"
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");
    int x1, x2, x3;
    int y1, y2, y3;
    printf("Введите координаты первой точки: ");
    scanf("%d", &x1);
    scanf("%d", &y1);
    printf("Введите координаты второй точки: ");
    scanf("%d", &x2);
    scanf("%d", &y2);
    printf("Введите координаты третьей точки: ");
    scanf("%d", &x3);
    scanf("%d", &y3);


    struct figure triangle = initialize(x1, x2, x3, y1, y2, y3);

    int Perimeter = printTriangleP(triangle);
    printf("Периметр треугольника: %d\n", Perimeter);

    int Square = printTriangleS(triangle);
    printf("Площадь треугольника: %d\n", Square);

    return 0;
}
