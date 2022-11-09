
#include <stdio.h>

int add(int x,int y);
void eight3() {

    int N;
    scanf("%d", &N);

    int sum = 0;

    for (int i = 1; i <= N; i++) {
        int sum2 = 0;
        for (int j = 1; j <= i; j++) {

            sum2 = add(sum2 , j);
        }
        sum = add(sum, sum2);
    }

    printf("%d", sum);
}

//
// Created by denovo on 2022/11/09.
//