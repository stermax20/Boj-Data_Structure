#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[1000];
int n, k, temp;
int main() {
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		if (i == k - 1) break;
	}
	printf("%d", arr[k - 1]);
	return 0;
}
