#include <stdio.h>

int main() {
    printf("Name: Atul Kumar Tripathi\n");
    printf("ERP: 10333\n");
    int pin; 
    int correctPin = 1234;
    int attempts = 3;

    while(attempts > 0) {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if(pin == correctPin) {
            printf("Access Granted");
            break;
        } else {
            attempts--;
            printf("Wrong PIN. Attempts left: %d\n", attempts);
        }
    }

    if(attempts == 0)
        printf("Card Blocked");

    return 0;
}
// Name: Atul Kumar Tripathi
// ERP: 10333
// Enter PIN: 2345
// Wrong PIN. Attempts left: 2
// Enter PIN: 1234
// Access Granted