#include<stdio.h>

int fact(int n){
    int f = 1;
    for(int i = 1; i <= n; i++){
        f *= i;
    }
    return f;
}

int ncr(int n, int r){
    return fact(n) / (fact(r) * fact(n - r));
}

int main(){
    int n;
    printf("enter n - ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){

        // left spaces for centering
        for(int space = 0; space < n - i; space++){
            printf("  ");
        }

        // numbers with gap between them
        for(int j = 0; j <= i; j++){
            printf("%d   ", ncr(i, j));   // ← 3 spaces gap
        }

        printf("\n");
    }
    return 0;
}
