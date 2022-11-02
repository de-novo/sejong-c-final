#include <stdio.h>

void seven10() {

    double X[10];


    for (int i = 0; i < 10; i++) {
        scanf("%lf", &X[i]);



    }


    for (int i = 0; i < 10; i++) {
//        printf("%0.1lf",X[i]);
//
        if(X[i]>0){
            printf(" %0.1lf",X[i]);
        }


    }
}