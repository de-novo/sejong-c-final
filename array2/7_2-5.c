//
// Created by denovo on 2022/11/02.
//
#include <stdio.h>

void seven2_5() {

    char X[5] = {'\0'};
    for (int i = 0; i < 5; i++) {
        scanf("%c", &X[i]);
    }

    for (int i = 0; i < 5; i++) {
        for(int j= 0 ; j<5 ;j++){
            int idx = j-i<0?j-i+5:j-i;
            printf("%c",X[idx]);
        }
        printf("\n");
    }




//    getchar();


}
