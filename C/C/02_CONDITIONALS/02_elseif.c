//if elseif else
#include<stdio.h>
int main(){
    int x;
    printf("enter your grade : ");
    scanf("%d",&x);
    if(x>=81 && x<=100) printf("excelent");
    else if(x>=61 && x<80) printf("good");
    if(x>=40 && x<=60) printf("average");
    return 0;
}

// //nested if else
// #include<stdio.h>
// int main(){
//     int x;
//     printf("enter your grade : ");
//     scanf("%d",&x);
//     if(x>=81){
//         printf("excellent");
//     }
//     else{
//         if(x>=61) printf("good");
//         else{
//             if(x>=41) printf("average");
//             else printf("fail");
//         }
//     }
//     return 0;
// }