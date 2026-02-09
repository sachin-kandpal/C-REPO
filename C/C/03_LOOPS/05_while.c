// #include<stdio.h>

// int main(){
//     int i = 0;
//     while(i<=10){
//         printf("%d \n",i);
//         i++;
//     }
//     return 0;
// }
   

// // COUNT THR NUMBER OF DIGIT USING LOOP
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number -- ");
//     scanf("%d",&n);
//     int count = 0;
//     while(n!=0){
//         n = n/10;
//         count++;
//     }
//     printf("count of digit is %d ",count);
//     return 0;
// }



// //WAP TO PRINT SUM OF DIGITS OF A GIVEN NUMBER
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number -- ");
//     scanf("%d",&n);
//     int count = 0;
//     int a = 0;
//     while(n!=0){
//         a = n%10;
//         n = n/10;
//         count = count + a;
//     }
//     printf("the sum of entered number is : %d",count);
//     return 0;
// }



// //WAP TO REVERSE OF A GIVEN NUMBER 
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number ");
//     scanf("%d",&n);
//     int b = 0;
//     while(n!=0){
//         int a = n%10;
//         b = b*10 + a;
//         n = n/10;
//     }
//     printf("rev is %d",b);
//     return 0;
// }




//PRINT FACTORIAL;
#include<stdio.h>
int main(){
    int n;
    printf("enter number - ");
    scanf("%d",&n);
    int p = 1;
    for(int i=1;i<=n;i++){
        p*=i;
    }
    printf("fac is %d",p);
    return 0;
}