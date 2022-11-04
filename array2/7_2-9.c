//
// Created by denovo on 2022/11/02.
//
#include <stdio.h>

void seven2_9() {

    int X[5] = {'\0'};
    for (int i = 0; i < 5; i++) {
        scanf("%d", &X[i]);
    }

    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {

            int t;
            if (X[j] > X[j + 1]) {
                t = X[j];
                X[j] = X[j + 1];
                X[j + 1] = t;
            }

        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%d\n", X[i]);
    }
}


