#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("Name: Atul Kumar Tripathi\n");
    printf("ERP: 10333\n");
    int x;
    printf("Enter the number x : ");
    scanf("%d", &x);
    int y;
    printf("Enter the number y : ");
    scanf("%d",&y);

    swap(&x, &y);

    printf("After swap: x = %d, y = %d", x, y);
    return 0;
}
// Name: Atul Kumar Tripathi
// ERP: 10333
// Enter the number x : 35
// Enter the number y : 45
// After swap: x = 45, y = 35