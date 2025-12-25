#include <stdio.h>

int main() {
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