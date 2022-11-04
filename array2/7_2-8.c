//
// Created by denovo on 2022/11/02.
//
#include <stdio.h>

void seven2_8() {

    int X[5] = {'\0'};
    for (int i = 0; i < 5; i++) {
        scanf("%d", &X[i]);
    }

    for (int i = 0; i < 5-1; i++) {
        int t;

        if(X[i]>X[i+1]){
            t=X[i];
            X[i]=X[i+1];
            X[i+1]=t;
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%d", X[i]);
    }
}


