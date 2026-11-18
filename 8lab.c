#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, ".UTF8");
	int n;
	double res = 0.0;
	printf("Введите n:");
	scanf_s("%d", &n);
	for (int i = 1;i <= n;i++) {
		double znam = 2 * i + 1;
		res += 1 / (znam * znam);
		
	}
	printf("%.2lf\n", res);
	system("pause");
}