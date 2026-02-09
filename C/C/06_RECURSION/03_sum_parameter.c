// // method 1
// #include<stdio.h>
// void sum(int n,int s){
//     if(n==0){
//         printf("%d",s);
//         return;
//     }
//     sum(n-1,s+n);
//     return;

// }
// int main(){
//     int n;
//     printf("enter num - ");
//     scanf("%d",&n);
//     sum(n,0);
//     return 0;
// }

//  method -2
#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return 1;
    return n + sum(n-1);
}
int main(){
    int n;
    printf("enter num - ");
    scanf("%d",&n);
    int fact = sum(n);
    printf("%d",fact);
    return 0;
}