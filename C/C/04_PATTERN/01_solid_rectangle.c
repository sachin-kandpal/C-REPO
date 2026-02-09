//solid rectangle
#include<stdio.h>
int main(){
    int m;
    printf("enter nunmber of rows - ");
    scanf("%d",&m);
    int n;
    printf("enter nunmber of columns - ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++){
        for(int i=1;i<=n;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}