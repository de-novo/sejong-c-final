//
// Created by denovo on 2022/11/02.
//
#include <stdio.h>

void seven2_7() {


    int X[10] = {};

    for (int i = 0; i < 10; i++) {
        scanf("%d", &X[i]);
    };

    for (int i = 0; i < 10; i++) {
        int cnt = 0;
        int f = 0;
        for (int j = 0; j < i; j++) {
            if (X[i] == X[j])f = 1;
        }
        for (int j = 0; j < 10; j++) {
            if (X[i] == X[j])cnt += 1;
        }
        if (f == 0) printf("%d %d\n", X[i], cnt);



//-1 -1 -1 -1 -1 -1 -1 -1 2 2
    }
}


