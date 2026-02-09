#include<stdio.h>
void swap(int* x,int* y){
    int copy = *x;
    *x = *y;
    *y =copy;
}
int main(){
    int x;
    printf("enter x - ");
    scanf("%d",&x);
    int y;
    printf("enter y - ");
    scanf("%d",&y);
    printf("%d is x and %d is y\n",x,y);
    swap(&x,&y);
    printf("%d is x and %d is y",x,y);
    return 0;
}