
#include <stdio.h>
void print_triangle(int n);


void eight5() {

    while (1){

        int N;
        scanf("%d", &N);
        if(N<=0){
            break;
        }
        print_triangle(N);
    }

}

//
// Created by denovo on 2022/11/09.
//