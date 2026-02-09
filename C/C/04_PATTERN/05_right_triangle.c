// // right straight
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter - ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// // right downward  {method - 1}
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter - ");
//     scanf("%d",&n);
//     for(int i=n;i>0;i--){
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// right downward  {method - 2}
#include<stdio.h>
int main(){
    int n;
    printf("enter - ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}