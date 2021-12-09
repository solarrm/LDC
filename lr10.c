#include "stdio.h"
#include <locale.h>
#include "string.h"

char str[100];
void probel(char* str, int index) {
    setlocale(LC_ALL, "ru");
    int i = 0;
    if ((str[i] == ' ' && str[i + 1] == ' ') || (str[i] == '(' && str[i + 1] == ' ')) {
        probel(str, index + 1);
    }
    for (i = index; i < strlen(str) - 1; i++) {
        str[i] = str[i + 1];
    }
    str[i] = 0;
}


int main() {
    setlocale(LC_ALL, "ru");
    printf("Номер 3\n\n");
    int n = 567789;
    int arr[6] = { 0 };
    int i = 0;
    while (n != 0) {
        arr[i++] = n % 10;
        n = n / 10;
    }
    for (i = 5; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    printf("Номер 5\n\n");
    scanf("%[^\n]s", str);
    for (i = 0; i < strlen(str); i++) {
        if ((str[i] == ' ' && str[i + 1] == ' ') || (str[i] == '(' && str[i + 1] == ' ')) {
            probel(str, i + 1);
        }
    }
    printf("%s\n", str);

    return 0;
}
