#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void decoding_bubble_sort(int arr[], int n);

int main() {
    int n;
    int arr[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        arr[i] = n - i;

    decoding_bubble_sort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

void decoding_bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 1; i < n - 1; i++) {
        for (j = 1; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}