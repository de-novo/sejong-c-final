
#include <stdio.h>


int print_line(int x, int y, int z);
void eight12() {

    int n;

    scanf("%d", &n);

    for(int i=1; i<=n;i++){
        print_line(n-i ,2*i-1,n-i );

    }

}

//
// Created by denovo on 2022/11/09.
//