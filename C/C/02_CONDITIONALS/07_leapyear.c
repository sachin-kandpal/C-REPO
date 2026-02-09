// leapyear is divisible by 4
//leap year is not divisible by 100 but
//leap year is dividiblr by 400

#include<stdio.h>
int main(){
    int x;
    printf("enter your year : ");
    scanf("%d",&x);
    if(x%400==0 || (x%4==0 && x%100!=0)){
        printf("this is a leap year GO PARTY");
    } 
    else 
     printf("not a leap yer DO WORK");
    return 0;
}