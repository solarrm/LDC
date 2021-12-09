#include <stdio.h>
#include<math.h>
#include <locale.h>

enum Lamps
{
	incandescentlamp = 1,
	daylightlamp,
	halogenlamp,
	energysavinglamp
};

struct Triangle
{
	float cons;
	int x1, x2, x3;
	int y1, y2, y3;
};

void printTriangle(Triangle t) {
	int S, P;
	S = sqrt(pow((t.x1 - t.x3), 2) + pow((t.y1 - t.y3), 2)) * sqrt(pow((t.x1 - t.x2), 2) + pow((t.y1 - t.y2), 2)) * t.cons;
	printf("Площадь: %d\n", S);
	P = sqrt(pow((t.x1 - t.x3), 2) + pow((t.y1 - t.y3), 2)) + sqrt(pow((t.x1 - t.x2), 2) + pow((t.y1 - t.y2), 2)) + sqrt(pow((t.x2 - t.x3), 2) + pow((t.y2 - t.y3), 2));
	printf("Периметр: %d\n", P);
	printf("Координаты: (%d, %d), (%d, %d), (%d, %d)\n\n", t.x1, t.y1, t.x2, t.y2, t.x3, t.y3);
}

struct bitf {
	unsigned int CardReader : 1;
	unsigned int SDCard : 1;
	unsigned int CompactFlash : 1;
	unsigned int MemoryStick : 1;
};
union myunion {
	struct bitf b;
	short i;
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Russian");
	printf("Задание номер 1\n\n");
	printf("%d\n\n", halogenlamp);
	printf("Задание номер 2\n\n");

	Triangle data = { 0.5, 1, 4, 1, 1, 1, 5 };
	printTriangle(data);

	printf("\n\nЗадание номер 3\n\n");

	union myunion t;
	scanf("%hx", &t.i);
    printf("Card-Reader: %d\n", t.b.CardReader);
	printf("SD card: %d\n", t.b.SDCard);
	printf("Compact Flash: %d\n", t.b.CompactFlash);
	printf("MemoryStick: %d\n", t.b.MemoryStick);
	
	return 0;
}
