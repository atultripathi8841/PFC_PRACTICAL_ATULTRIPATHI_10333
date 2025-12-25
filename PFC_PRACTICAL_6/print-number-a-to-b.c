#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter the number a and b");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        printf("%d",i);
    }
    return 0;
}