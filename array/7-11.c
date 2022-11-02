#include <stdio.h>

void seven11() {



    double X[10];


    for (int i = 0; i < 10; i++) {
        scanf("%lf", &X[i]);


    }
    double min = X[0];

    for (int i = 0; i < 10; i++) {
        min = min>X[i]?X[i]:min;

    }
    printf("%0.1lf",min);
}
