#include<stdio.h>
int main(){
    float a,b,c;
    printf("enter first side :_");
    scanf("%f",&a);
    printf("enter second side :_");
    scanf("%f",&b);
    printf("enter third side :_");
    scanf("%f",&c);
    if(a>b+c && b>a+c && c>a+b) {
        printf("it is a side of a triangle");
    }
    return 0;
}   

// #include<stdio.h>
// int main(){
//     float a,b,c;
//     printf("enter first number :_");
//     scanf("%f",&a);
//     printf("enter second number:_");
//     scanf("%f",&b);
//     printf("enter third number :_");
//     scanf("%f",&c);
//     if(a>b && a>c)  printf("the greatest number is %f",a);
//     if(b>a && b>c)  printf("the greatest number is %f",b);
//     if(c>b && c>a)  printf("the greatest number is %f",c);

//     return 0;
// }   