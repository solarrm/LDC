#include <stdio.h>

int main() {
	int arr[8] = { 77, 12, 74, 34, 56, 78, 234, 678 };
    for (int i = 0; i < 8; i++)
        printf("%d\n", arr[i]);
    int mas1[2][2] = { { 2, 1 }, { 1, 3 } };
    int mas2[2][2] = { { 1, 2 }, { 3, 1 } };
    int mas3[2][2] = { {0} };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int n = 0; n < 2; n++)
                mas3[i][j] += mas1[i][n] * mas2[n][j];
        }
    }

    for (int j = 0; j < 2; j++) {
        printf("\n");
        for (int i = 0; i < 2; i++) {
            printf("%d", mas3[j][i]);
            printf(" ");
        }
    }
	return 0;
}
