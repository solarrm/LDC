#include <stdio.h>

int main() {
	int numb;
	int hex;
	scanf("%d", &numb);
	scanf("%x", &hex);
	printf("%o\n", numb);
	printf("%d ", numb);
	printf("%x ", numb);
	printf("%x \n", numb >> 4);
	printf("%x ", numb);
	printf("%x\n", ~numb);
	printf("%x ", numb ^ hex);
	return 0;
}
