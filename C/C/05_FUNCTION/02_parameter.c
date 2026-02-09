#include<stdio.h>
void oddEvwn(int x){
    if(x%2==0) printf("%d is even",x);
    else printf("%d is odd",x);
}
int main(){
    int a = 1;
    oddEvwn(a);
    return 0;
}