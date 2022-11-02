#include <stdio.h>

void seven5() {
    int X[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &X[i]);
    }
    int max=X[0];
    for (int i =0; i<10;i++){
        max= max<X[i]?X[i]:max;
    }
    printf("%d",max);

}
