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
    for (int i = 0; i < n-1; i+=k) {
       for (int j = 0;i < n-i-1;j += k) {
           if (arr[i] > arr[i + 1]) {
               int sort = (arr[j]);
               (arr[j]) = (arr[j + 1]);
               arr[j + 1] = (sort);
               printf(" %d ", arr[j]);
            }
        }
    }
    printf("\n");

}