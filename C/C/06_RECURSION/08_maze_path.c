// #include <stdio.h>

// int maze(int cr, int cc, int er, int ec) {
//     int rightways =0;
//     int downways =0;
//     if(cr==er && cc==ec) return 1;
//     if(cr==er){//only rightways
//         rightways += maze(cr,cc+1,er,ec);
//     }
//     if(cc==ec){//only downways
//         downways += maze(cr+1,cc,er,ec);
//     }
//     if(cr<er && cc<ec){
//         rightways += maze(cr,cc+1,er,ec);
//         downways += maze(cr+1,cc,er,ec);
//     }

//     int totalWays = rightways + downways;
//     return totalWays;

// }

// int main() {
//     int n;
//     printf("Enter rows: ");
//     scanf("%d", &n);
//     int m;
//     printf("Enter  columns: ");
//     scanf("%d",&m);
//     int noOfWays = maze(1,1,n,m);
//     printf("%d",noOfWays);
//     return 0;
// }


// METOD-2
#include <stdio.h>

int maze(int n,int m) {
    int rightways =0;
    int downways =0;
    if(n==1 && m==1) return 1;
    if(n==1){//only rightways
        rightways += maze(n,m-1);
    }
    if(m==1){//only downways
        downways += maze(n-1,m);
    }
    if(n>1 && m>1){
        rightways += maze(n,m-1);
        downways += maze(n-1,m);
    }

    int totalWays = rightways + downways;
    return totalWays;

}

int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);
    int m;
    printf("Enter  columns: ");
    scanf("%d",&m);
    int noOfWays = maze(n,m);
    printf("%d",noOfWays);
    return 0;
}
