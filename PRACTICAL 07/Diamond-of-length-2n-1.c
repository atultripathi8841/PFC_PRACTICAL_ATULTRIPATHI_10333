#include <stdio.h>

int main() {
    printf("Name: Atul Kumar Tripathi\n");
    printf("ERP: 10333\n");
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++)
            printf(" ");
        for(j = 1; j <= (2*i - 1); j++)
            printf("*");
        printf("\n");
    }

    for(i = n-1; i >= 1; i--) {
        for(j = n; j > i; j--)
            printf(" ");
        for(j = 1; j <= (2*i - 1); j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
// Name: Atul Kumar Tripathi
// ERP: 10333
// Enter n: 6
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//  *********
//   *******
//    *****
//     ***
//      *