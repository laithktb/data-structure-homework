#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void sort_descending(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[SIZE];

    srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = rand() % 100;
    }

    sort_descending(numbers, SIZE);

    printf("Sorted numbers in descending order:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
