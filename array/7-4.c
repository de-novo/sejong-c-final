#include <stdio.h>

void seven4() {
    int X[10];
    int Y[10];
    int Z[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &X[i]);
    }
    for (int i = 0; i < 10; i++) {
        scanf("%d", &Y[i]);
    }

    for (int i =0; i<10;i++){
        Z[i]=X[i]+Y[9-i];
        printf(" %d",Z[i]);
    }


}
