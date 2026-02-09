// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter any number - ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("hello world\n");
//     }
//     return 0;0;
// }


// // print number from 1 to 100
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter n - ");
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++){
//         printf("hi%d\n",i);
//     }
//     return 0;
// }

// //100 to 1
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number - ");
//     scanf("%d",&n);
//     for (int i = n;i>=1;i--){
//         printf("%d\n",i);
//     }
//     return 0;
// }


// // even no ko print karna
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter n - ");
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++){              //or i+=2 karke if statement nhi lgao
//         if(i%2==0) printf("%d\n",i);    
//     }
//     return 0;
// }



// //table of any number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter your number - ");
//     scanf("%d",&n);
//     for(int i=n;i<=10*n;i=i+n){
//         printf("%d\n",i);
//     }
//     return 0;
// }

// //or

// #include<stdio.h>
// int main(){
//     int x;
//     printf("enter your no. ");
//     scanf("%d",&x);
//     for(int i = 1; i <= 10;i++){
//         printf("%d\n",i*x);
//     }
//     return 0;
// }

// AP UPTO N TERM 1,3,5,7,9
#include<stdio.h>
int main(){
    int n;
    printf("enter number - ");
    scanf("%d",&n);

    // //with formula method 1
    // for(int i = 1;i<=2*n-1;i+=2){
    //     printf("%d\n",i);
    // }

    //with third veriable method 2
    int a = 1;
    for(int i = 1;i<=n;i++){
        printf("%d\n",a);
        a = a + 2;
    }

    return 0;
}