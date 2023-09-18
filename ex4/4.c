#include <stdio.h>

void sorting(int numbers[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

int main() {
    while (1) { 
        int size;
        printf("How many numbers do you want to enter (0 to exit)?\n");
        scanf("%d", &size);

        if (size == 0) {
            printf("Exiting \n");
            break; 
        }

        int numbers[size];

        for (int i = 0; i < size; i++) {
            printf("Enter the number %d: ", i + 1);
            scanf("%d", &numbers[i]);
        }

        sorting(numbers, size);

        printf("Sorted array:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", numbers[i]);
        }

        int value;
        printf("\nEnter the number you want to search for: ");
        scanf("%d", &value);

        int low = 0;
        int high = size - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            int midv = numbers[mid];

            if (midv == value) {
                printf("The number %d is found in the INDEX %d\n", value, mid);
                break;
            } else if (midv < value) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if (low > high) {
            printf("The number %d is not found in the array.\n", value);
        }
    }

    return 0;
}

                
