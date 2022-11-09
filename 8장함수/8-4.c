
#include <stdio.h>

void print_row1(int n);

void print_row2(int n);

void eight4() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i == 1 | i == N) {
            print_row1(N);
        } else print_row2(N);
    }

}

//
// Created by denovo on 2022/11/09.
//