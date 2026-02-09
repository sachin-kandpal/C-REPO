// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number - ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j = 1;j<=n-i;j++){
//             printf("  ");
//         }
//         for(int j =1;j<=2*i-1;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// {method -2 }
#include<stdio.h>
int main(){
    int n;
    printf("enter number - ");
    scanf("%d",&n);
    int nsp = n-1;
    int nst = 1;
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=nsp;j++){
            printf("  ");
        } 
        for(int j =1;j<=nst;j++){
            printf("* ");
        }
        nsp--;
        nst+=2;
        printf("\n");
    }
    return 0;
}