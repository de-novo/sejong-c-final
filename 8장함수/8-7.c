
#include <stdio.h>

void print_triangle(int n);

int func2(int n,int a,int b,int c);

void eight7() {

    int N;
    scanf("%d", &N);
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    printf("%d",func2(N,a,b,c));
}

//
// Created by denovo on 2022/11/09.
//