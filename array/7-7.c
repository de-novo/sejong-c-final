#include <stdio.h>

void seven7() {
    int X[10];
    int Y[10]={0};
    for (int i = 0; i < 10; i++) {
        scanf("%d", &X[i]);
    }


    for (int i = 0; i < 10; i++) {
        int flag = 0;
        for (int j = 0; j < 10; j++) {
            if (X[i] == Y[j]) {
                flag = 1;
                break;
            }
        }
        if(flag==0){
            Y[i]=X[i];
        }

    }
    for (int i = 0; i < 10; i++) {
        if(Y[i]!=0){
            printf(" %d",Y[i]);
        }
    }

}
