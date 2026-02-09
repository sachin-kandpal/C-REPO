// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter n -- ");
//     scanf("%d",&n);
//     int check = 1;
//     for (int i = 2;i<=n/2;i++){
//         if(n%i==0){
//             check = 0;
//             break;
//         }
//     }
//     if(n==1){printf("1 is nor prime or composite");}
//     else if(check == 1){printf("%d is a prime number",n);}
//     else{printf("%d is a composite number ",n);}
        
//     return 0;
// }




//bullean datatype
#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    printf("enter n -- ");
    scanf("%d",&n);
    bool flag = true;
    for (int i = 2;i<=n/2;i++){
        if(n%i==0){
        flag = false;
            break;
        }
    }
    if(n==1){printf("1 is nor prime or composite");}
    else if(flag == 1){printf("%d is a prime number",n);}
    else{printf("%d is a composite number ",n);}
        
    return 0;
}


