#include <stdio.h>

//1번 3번
int add(int x, int y) {
    return x + y;
}

//2번
int addXtoY(int x, int y) {

    return y * (y + 1) / 2 - x * (x + 1) / 2 + x;
}


//4번
void print_row1(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", n);
    }
    printf("\n");
}

void print_row2(int n) {
    for (int i = 1; i <= n; i++) {
        if (i == n || i == 1)printf("%d", n);
        else printf(" ");
    }
    printf("\n");
}
//5번
void print_triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

}
//6번
int func1(int n){
//    f(x) = 2x2 -5x + 1


    return 2*n*n-5*n+1;
}


//7번 8번

int func2(int n,int a,int b,int c){
//    ax2 + bx + c


    return a*n*n+b*n+c;
}
//9번
//int max1=NULL;
//int max2= NULL;
//void update_max(int n){
//    if(max1==NULL)max1=n;
//    else if(max2==NULL&&max1>n)max2=n;
//    else if(max1<n) {
//        max2= max1;
//        max1= n;
//    }else if(max2<n){
//        max2= n;
//
//    }
//
//}

//10번
//int N;
//void die3(int x,int y,int z) {
//
//    if(N==x+y+z){
//        printf("%d %d %d\n",x,y,z);
//    }
//}
//
//void die2(int x,int y) {
//    for(int i =1; i<=6; i++){
//        die3(x,y,i);
//    }
//}
//
//void die1(int x) {
//
//    for(int i =1; i<=6; i++){
//        die2(x,i);
//    }
//
//
//}


//11번
//int a, b, c;
//
//int count_strike(int x, int y, int z) {
//    int S = 0;
//    if (x == a) {
//        S++;
//    }
//    if (y == b) {
//        S++;
//    }
//    if (z == c) {
//        S++;
//    }
//    return S;
//}
//
//int count_ball(int x, int y, int z) {
//    int B=0;
//    if ( a == y || a == z) {
//        B++;
//    }
//    if ( b == x || b == z) {
//
//        B++;
//    }
//    if (c == x || c == y) {
//        B++;
//    }
//    return B;
//}


// 12번
int print_line(int x, int y, int z) {
    for(int i =0;i<x;i++){
        printf(" ");
    }
    for(int i =0;i<y;i++){
        printf("*");
    }
    for(int i =0;i<z;i++){
        printf(" ");
    }
    printf("\n");
}

// 13번
int count_3(int x) {

    int cnt3 = 0;

    for (int i = 1; i<=x;i++){
        int t = i;
        while (1){
            int k = t%10;

            if(k==3)cnt3++;

            if(k==t)break;

            t/=10;
        }

    }
    return cnt3;

}


//14 번
int is_prime(int x){
    for(int i=2;i<=x;i++){
        if(x%i==0&& i!=x){
            break;

        }
        if(x==i){
            return 1;
        }
    }
    return 0;
}

int next_prime(int x){

    int prime =0;
    while (1){
        if(is_prime(x+1)){
            prime = x+1;
            break;
        } else{
            x++;
        }
    }
    return prime;
}