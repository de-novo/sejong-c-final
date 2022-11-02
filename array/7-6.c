#include <stdio.h>

void seven6() {
    int X[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &X[i]);
    }

    for (int i = 0; i < 10; i++) {
        int cnt = 0;
        for (int j = 0; j < 10; j++) {
            if (X[i] < X[j]) {
                cnt += 1;
            }
        }
        printf(" %d", cnt);
    }


}
