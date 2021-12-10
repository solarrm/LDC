#include <stdio.h>
#include <math.h>
int main() {
	float x, y;
	float z1, z2;
	scanf("%f", &x);
	scanf("%f", &y);
	z1 = pow(cos(x), 4) + pow(sin(y), 2) + 0, 25 * pow(sin(2 * x), 2) - 1;
	z2 = sin(x + y) * sin(y - x);
	printf("%f %f\n", z1, z2);
	return 0;
}
