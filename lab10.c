#include <stdio.h>
#include <math.h>
#include <locale.h>
double fa(double x) {
	double y;
	y = x * x;
	return y;
}
double fb(double x, double b) {
	double y;
	y = x * x + 2 * x * b + b * b;
	return y;
}
int main() {
	setlocale(LC_ALL, ".UTF8");
	double x, b;
	printf("Введите х:");
	scanf_s("%lf", &x);
	printf("Введите b:");
	scanf_s("%lf", &b);
	printf("fa(x)=%.2lf \nfb(x,b)=%.2lf\n ", fa(x), fb(x,b));
	printf("%.2lf %.2lf %.2lf\n", fa(x) * fb(x,b), pow(fa(x),2) - 2 * fa(x) * fb(x, b) + pow(fb(x,b),2),2*(fa(x)+fb(x,b)));
	system("pause");
}