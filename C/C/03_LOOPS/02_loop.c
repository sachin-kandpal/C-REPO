// //print gp with help of loop
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number - ");
//     scanf("%d",&n);
//     int a = 1;
//     for(int i = 1;i<=n;i++){
//         printf("%d\n",a);
//         a = 2*a;
//     }
//     return 0;
// }


// //break use
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter n - ");
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++){
//         printf("%d\n",i);
//         if(i == 50) break;
//     }
//     return 0;
// }


// //highest factor
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter any number - ");
//     scanf("%d",&n);
//     int hf = 1;
//     for(int i = n/2;i>=1;i--){
//         if(n%i==0){
//             hf = i;
//             break;
//         }
//     }
//     printf("%d\n",hf);
//     return 0;
// }


// //use of continue
// #include<stdio.h>
// int main(){
//     for(int i = 1;i<=100;i++){
//         if(i%2==0) continue;
//         printf("%d\n",i);
//     }
//     return 0;
// }


