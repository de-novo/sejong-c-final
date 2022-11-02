#include <stdio.h>

void seven14() {
    char X[10];
    char Y[10];

    for(int i=0;i<10;i++){
        scanf("%c",&X[i]);
    }
    getchar();
    for(int i=0;i<10;i++){

        scanf("%c",&Y[i]);

    }
    for(int i=0;i<10;i++){
        printf(" %c",X[i]);
        printf(" %c",Y[i]);

    }
//    for(int i=0;i<10;i++){
//        printf(" %c",Y[i]);
//
//
//    }


}
