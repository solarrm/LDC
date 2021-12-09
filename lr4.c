#include <stdio.h>

int main() {
	int numb;
	int numb2;
	int res2;
	int x = -56;
	int y = 56;
	scanf("%d", &numb);
	bool res = (numb > x && numb < y);
	printf("%d\n", res);
	scanf("%d", &numb2);
	res2 = (numb2 >> 7) % 2;
	printf("%d\n", res2);
	return 0;
}
