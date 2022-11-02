#include <stdio.h>

void seven10() {

    double X[10];
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &X[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("%.1lf ", X[i]);
    }
}