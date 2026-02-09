#include<stdio.h>

int main(){
    int p;
    printf("enter p :\n ");
    scanf("%d",&p);
    int r;
    printf("enter r : \n");
    scanf("%d",&r);
    int t;
    printf("enter t :\n ");
    scanf("%d",&t);
    int si = (p*r*t)/100;
    printf("%d",si);
    return 0;
}