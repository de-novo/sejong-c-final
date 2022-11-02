#include <stdio.h>

void seven12() {


    double X[10];


    for (int i = 0; i < 10; i++) {
        scanf("%lf", &X[i]);


    }

    for (int i = 0; i < 10; i++) {
        int cnt=0;
        for (int j = 0; j < 10; j++) {
            if(X[i]>X[j]){
                cnt++;
            }
        }
        printf(" %d",cnt);
    }


}
