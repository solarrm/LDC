#include "locale.h"
#include "stdio.h"
#include "string.h"

int main() {

    setlocale(LC_ALL, "ru");

    printf("Задание номер 1\n");
    char s1[256];
    char s2[256];
    printf("Введите две строки:\n");
    scanf("%s", s1);
    scanf("%s", s2);
    strcat(s1, s2);
    printf("Конкатенация двух строк: %s\n", s1);


    printf("Задание номер 3\n");
    printf("Введите две строки:\n");
    scanf("%s", s1);
    scanf("%s", s2);
    if (strcmp (s1, s2) == 0) {
        printf("Строки равны\n");
    }
    else {
        printf("Строки не равны\n");
    }
    
    printf("Задание номер 8\n");
    printf("Введите строку:\n");
    scanf("%s", s1);
    printf("Введите символ для поиска в строке\n");
    char symbol;
    scanf(" %c", &symbol);
    char* result;
    result = strchr(s1, symbol);
        printf("Индекс символа: %d\n", result - s1);

    printf("Задание номер 10\n");
    char* p;
    printf("Введите две строки:\n");
    scanf("%s", s1);
    scanf("%s", s2);
    for (p = s1; *p; ++p)
        if (strchr(s2, *p))
            printf("%c\n", *p);

    printf("Задание номер 12\n");
    printf("Введите две строки:\n");
    scanf("%s", s1);
    scanf("%s", s2);
    int length;
    length = strcspn(s1, s2);
    printf("Длина отрезка одной строки, не содержащего символы второй строки %d\n", length);

    return 0;
}
