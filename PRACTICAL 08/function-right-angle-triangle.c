#include <stdio.h>

void triangle(int n) {
    int i;
    int j;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

int main() {
    printf("Name: Atul Kumar Tripathi\n");
    printf("ERP: 10333\n");
    int n;
    printf("Enter the height: ");
    scanf("%d", &n);

    triangle(n);
    return 0;
}
// Name: Atul Kumar Tripathi
// ERP: 10333
// Enter the height: 6
// *
// **
// ***
// ****
// *****
// ******