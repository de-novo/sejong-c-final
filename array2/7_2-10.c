//
// Created by denovo on 2022/11/02.
//
#include <stdio.h>

void seven2_10() {

    int X[5] = {'\0'};
    for (int i = 0; i < 5; i++) {
        scanf("%d", &X[i]);
    }
    int Rank[5];
    for (int i = 0; i < 5; i++) {
        int rank = 0;
        for (int j = 0; j < 5; j++) {
            if (X[i] < X[j]) {
                rank++;
            }
        }
        Rank[i] = rank+1;

    }
    for (int i = 0; i < 5; i++) {
        printf("%d=r%d ", X[i], Rank[i]);
    }


}

