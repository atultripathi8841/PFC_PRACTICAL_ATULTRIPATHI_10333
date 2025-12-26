#include <stdio.h>

int main() {
    printf("Name: Atul Kumar Tripathi\n");
    printf("ERP: 10333\n");
    int n; 
    int sum = 0;
    printf("Enter the number n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0)
            continue;
        sum += i;
    }
    printf("Sum of even numbers = %d", sum);
    return 0;
}
// Name: Atul Kumar Tripathi
// ERP: 10333
// Enter the number n: 6
// Sum of even numbers = 12