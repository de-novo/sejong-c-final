#include <stdio.h>

void seven2_1() {
//    int N;
    int X[5]={'\0'};
    int avg = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &X[i]);
        avg+=X[i];
    }
    double avg_real = (double)avg/5;
    for (int i = 0; i < 5; i++) {
        if(avg_real<X[i])printf("%d\n", X[i]);

    }


//    getchar();


}
