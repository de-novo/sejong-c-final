#include <stdio.h>

void seven16() {
    int N;
    char X[10]={'\0'};
    int Y[10]={0};
    scanf("%d",&N);

    getchar();

    for (int i = 0; i < N; i++) {
        scanf("%c", &X[i]);
    }
    getchar();
    for (int i = 0; i < N; i++) {
        scanf("%d", &Y[i]);
    }
//    getchar();

    for (int i = 0; i < N; i++) {
//        printf("%d", Y[i]);
        printf("x[%d%%%d]=x[%d]=%c\n", Y[i],N,Y[i]%N,X[Y[i]%N]);
    }


}
