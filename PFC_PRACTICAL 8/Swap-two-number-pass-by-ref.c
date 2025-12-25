#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
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