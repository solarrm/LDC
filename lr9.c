#include "stdio.h"
#include "string.h"
#include "locale.h"

int main() {
    setlocale(LC_ALL, "ru");
    printf("Номер 3\n\n");
    const char* str[] = { "ноль", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять" };
    char res[10];
    int n;
    scanf("%d", &n);
    strcpy(res, str[n]);
    printf("%s\n\n", res);
    
    int month, percent, sum, i, numb = 1;
    printf("Номер 5\n\n");
    printf("Введите количество месяцев: ");
    scanf("%d", &month);
    printf("Введите процентную ставку: ");
    scanf("%d", &percent);
    printf("Введите начальную сумму банковского счета: ");
    scanf("%d", &sum);
    for (i = 1; i <= month; i++) {
        sum += sum * percent / 100;
        printf("%d. %d\n", numb, sum);
        numb++;
    }
	return 0;
}
