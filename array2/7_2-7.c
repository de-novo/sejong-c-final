//
// Created by denovo on 2022/11/02.
//
#include <stdio.h>

void seven2_7() {

    char X[3] = {'\0'};
    char Y[3] = {'_', '_', '_'};
    for (int i = 0; i < 3; i++) {
        scanf("%c", &X[i]);
    };
    getchar();

    for (int i = 0; i < 5; i++) {
        char c;
        scanf("%c", &c);
        getchar();

        for (int j = 0; j < 3; j++) {
            if (X[j] == c) Y[j] = c;
            printf("%c", Y[j]);

        }
//        for (int j = 0; j < 3; j++) {
//            printf("%c", Y[j]);
//        }
        printf("\n");
        if(X[0]==Y[0]&&X[1]==Y[1]&&X[2]==Y[2]){
            break;
        }

    }


}
