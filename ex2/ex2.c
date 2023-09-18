#include <stdio.h>

void handlingNumberMobile() {
    char num[11]; // Increase the size of the array to 11 to store 10 characters and a null terminator.
    int i;

    printf("\nEnter your number:\n ");
    
    // Use ' %c' in scanf to skip newline characters and spaces.
    for (i = 0; i < 10; i++) {
        scanf(" %c", &num[i]);
    }
    num[10] = '\0'; // Null-terminate the string.

    if (num[1] == '6') {
        printf("Mobile: +212%s\n", num + 1); // Print the number starting from the second character.
    } else if (num[1] == '5') {
        printf("Fix : +212%s\n", num + 1); // Print the number starting from the second character.
    }
}
int main() {
    int choice;

    while (1) {
        printf("1: Enter number\n");
        printf("2: Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                handlingNumberMobile();
                break;
            case 2:
                return 0;
            default:
                printf("Invalid choice. Please select 1 or 2.\n");
        }
    }
}
