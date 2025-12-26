#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    printf("Name: Atul Kumar Tripathi\n");
    printf("ERP: 10333\n");
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", sumOfDigits(n));
    return 0;
}
// Name: Atul Kumar Tripathi
// ERP: 10333
// Enter number: 23456
// Sum of digits = 20