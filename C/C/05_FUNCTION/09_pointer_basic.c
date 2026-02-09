// #include<stdio.h>
// int main(){
//     int x;
//     printf("\n");
//     printf("%p",&x);//address print hoga
//     printf("\n");
//     return 0;
// }

/* agar kisi int ka address kisi dabbe
mai store karana ho to usse pointer bolenge */


// #include<stdio.h>
// int main(){
//     int x;
//     printf("\n");
//     int* z =&x;
//     printf("%p",z);
//     printf("\n");
//     return 0;
// }


// // print value using address
// #include<stdio.h>
// int main(){
//     printf("\n");

//     int x=80;
//     int* z =&x;

//     printf("%d\n",x);
//     printf("%p\n",z);
//     printf("%d\n",*z);//this is the method * is dereference operator

//     printf("\n");
//     return 0;
// }


//change the value of x using derefrence operator
// print value using address
#include<stdio.h>
int main(){
    printf("\n");

    int x=8;
    int* z =&x;

    printf("%d\n",x);
    *z = 7;
    printf("%d\n",x);

    printf("\n");
    return 0;
}
