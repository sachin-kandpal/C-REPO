#include<stdio.h>
int main(){
    int x;
    printf("enter a number : ");
    scanf("%d",&x);
    if(x%15!=0){
        if(x%3!=0){
            if(x%5==0) printf("condition valid");
            else printf("condition invalid");
        }
        else printf("condition valid");
        
    }
    
    else printf("condition invalid");
    return 0;
}