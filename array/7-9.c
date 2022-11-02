#include <stdio.h>

void seven9() {
    int N;
    int X[10] = {0};
    scanf("%d", &N);


    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }
    int M = 0;
    for (int i = 0; i < N; i++) {

        for (int j = N; j > i+1; j--) {
            X[i] *= 10;

        }


        M += X[i];
    }
    printf("%d",M);
}
