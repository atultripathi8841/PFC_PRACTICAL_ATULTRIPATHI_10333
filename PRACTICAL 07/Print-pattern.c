#include <stdio.h>

int main() {
    printf("Name: Atul Kumar Tripathi\n");
    printf("ERP: 10333\n");
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}
// Name: Atul Kumar Tripathi
// ERP: 10333
// Enter the number: 5
// A
// AB
// ABC
// ABCD
// ABCDE