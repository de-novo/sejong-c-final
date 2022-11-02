//
// Created by denovo on 2022/11/02.
//
#include <stdio.h>

void seven2_4() {

    int X[10] = {'\0'};
    for (int i = 0; i < 10; i++) {
        scanf("%d", &X[i]);
    }
    for (int j = 1; j <= 3; j++) {
        printf("%d:", j);
        for (int i = 0; i < 10; i++) {
            if (j == X[i]) {
                printf("*");
            }
        }
        printf("\n");
    }



//    getchar();


}
