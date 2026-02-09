#include<stdio.h>
int main(){
    int n;
    printf("enter n -- ");
    scanf("%d",&n);
    for (int i = 2;i<=n/2;i++){
        if(n%i==0){
            printf(" %d is composite number more than two factor",n);
            break;
        }
        // else{
        //     printf("prime number no factor other than one and itself");
        //     break;
        // }
    }
    return 0;
}