#include <stdio.h>

int main() {
    char s1[10];
    char s2[10];
    FILE* fin1;
    FILE* fin2;
    FILE* fout;

    fin1 = fopen("A.txt", "r");
    fin2 = fopen("B.txt", "r");
    fout = fopen("new.txt", "w");

    if (fin1 != NULL) {
        fscanf(fin1, "%s", s1);
    }
    fclose(fin1);

    if (fin2 != NULL) {
        fscanf(fin2, "%s", s2);
    }
    fclose(fin2);

    fprintf(fout, "%s %s\n", s1, s2);
    fclose(fout);

    return 0;
}
