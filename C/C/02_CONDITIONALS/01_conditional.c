#include<stdio.h>

int main(){
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    //if statement
    if(x%2==0) {
        printf("even number\n");
        printf("badiya");
    }
    if(x%2!=0) printf("odd number\n");  
    return 0;
}