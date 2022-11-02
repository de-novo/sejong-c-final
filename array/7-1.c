#include <stdio.h>

void seven1() {
    int a[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (int i =0; i<10;i++){
        int z= a[i];
        if(z%2==0){

            printf(" %d",z);

        }

    }


}
