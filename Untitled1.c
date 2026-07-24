#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], result[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int left = 0, right = n - 1, pos = n - 1;

    while (left <= right) {
        if (arr[left] * arr[left] > arr[right] * arr[right]) {
            result[pos] = arr[left] * arr[left];
            left++;
        } else {
            result[pos] = arr[right] * arr[right];
            right--;
        }
        pos--;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
