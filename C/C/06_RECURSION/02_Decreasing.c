// // print n to 1
// #include<stdio.h>
// void decreasing(int n){
//     if(n==0) return;
//     printf("%d\n",n);
//     decreasing(n-1);
//     return;
// }
// int main(){
//     int n;
//     printf("enter num - ");
//     scanf("%d",&n);
//     decreasing(n);
//     return 0;
// }

// // print 1 to n{method 1}
// #include<stdio.h>
// void increasing(int x,int n){
//     if(x>n) return;
//     printf("%d\n",x);
//     increasing(x+1,n);
//     return;
// }
// int main(){
//     int n;
//     printf("enter num - ");
//     scanf("%d",&n);
//     increasing(1,n);
//     return 0;
// }

// print 1 to n{method 2}
#include<stdio.h>
void incresing(int n){
    if(n==0) return;
    incresing(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("enter num - ");
    scanf("%d",&n);
    incresing(n);
    return 0;
}