#include<stdio.h>
int main(){
    int x;
    printf("enter your number : ");
    scanf("%d",&x);
    (x%2==0) ? printf("number is even") : printf("number is odd");
    return 0;
}