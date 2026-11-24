#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, ".UTF8");
    int k;
    int arr[20];
    int n = 20;
    printf("Введите k: ");
    scanf_s("%d", &k);
    srand(time(NULL));
    for (int i = 0;i < n;i++) {
        arr[i] = rand() % 201 - 100;
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Массив,у которого порядковый номер кратен k\n");
    for (int i = k - 1; i < n; i += k) {
        for (int j = k - 1; j < n ; j += k) {
            if (fabs(arr[j]) > fabs(arr[j + k])) {
                int sort = arr[j];
                arr[j] = arr[j + k];
                arr[j + k] = sort;
            }
        }
    }
    for (int i = k-1;i < n;i+=k) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
