#include <stdio.h>
#include <math.h>
#define n 6
int main() {
	int arr[n] = { 100, 87 ,-250,567,42,-87 };
	int suma = 0;
	int i;
	for (i = 0;i < n;i++) {
		if (arr[i] <= 0) {
			break;
		}
	}
	for (int j = i + 1;j < n;j++) {
		suma += fabs(arr[j]);
	}
	printf("%d\n", suma);
	system("pause");
	return 0;
}
