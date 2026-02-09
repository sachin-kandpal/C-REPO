#include<stdio.h>
//we have to do half of number by taking input a integer so typecasting
int main(){
    int x;
    printf("enter a number : ");
    scanf("%d",&x);
    //typecasting
    float y = (float)x;
    printf("%f",y/2);
    return 0;
} 