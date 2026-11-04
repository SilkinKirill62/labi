#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, ".UTF8");
	char simvol;
	int h, b, a;
	int z, x;
	printf("Введите символ:\n");
	scanf_s("%c", &simvol);
	printf("Высота:\n");
	scanf_s("%d", &h);
	printf("Основание верхнее:\n");
	scanf_s("%d", &b);
	printf("Основание нижнее:\n");
	scanf_s("%d", &a);

	printf("___________________\n");
	for (z = 0;z <= h;++z) {
		for (x = 0;x < b + (a - b) * z / (h - 1);x++) {
			printf(" %c", simvol);
		}
		printf("\n");
	}
	system("pause");
}