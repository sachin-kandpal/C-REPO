// // character ke uski ascii value nikalna
// #include<stdio.h>
// int main(){
//     char ch = '@';
//     printf("%c\n",ch);
//     return 0;
// }


// // character ke uski ascii value nikalna
// #include<stdio.h>
// int main(){
//     char ch = '@';
//     printf("%d\n",ch);//implicit typecasting
//     int a = (int)ch;//explit typecasting
//     printf("%d",a);
//     return 0;
// }   



// ascii value ko charactor mai convrt karna
#include<stdio.h>
int main(){
    int x = 36;
    printf("%c\n",x);//implicit typecasting
    char ch = (char)x;//explicit typecasting
    printf("%c",ch);
    return 0;
}