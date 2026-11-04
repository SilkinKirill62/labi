#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, ".UTF8");
	int a,b;
	printf("Введите рубли");
	scanf_s(" %d", &a);
	printf("Введите копейки");
	scanf_s(" %d", &b);
	switch (a)
	{
	case '0':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		printf("%d рублей\n",a);
		break;
	case '1':
		printf("%d рубль\n", a);
		break;
	default:
		printf("%d рубля\n",a);
		break;
	}
	
	switch (b) {
	case '0':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		printf("%d копеек\n", b);
		break;
	case '1':
		printf("%d копейка\n", b);
		break;
	default:
		printf("%d копейки\n", b);
		break;
	}
	return 0;
}
