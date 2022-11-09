
#include <stdio.h>

void print_triangle(int n);

int func2(int n,int a,int b,int c);

void eight8() {

    int N;
    scanf("%d", &N);
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int z,x,v;
    scanf("%d %d %d", &z,&x,&v);

    printf("%d",func2(func2(N,a,b,c),z,x,v));
}

//
// Created by denovo on 2022/11/09.
//