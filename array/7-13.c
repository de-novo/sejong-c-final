#include <stdio.h>

void seven13() {


    char X[10];


    for (int i = 0; i < 10; i++) {
        scanf("%c", &X[i]);


    }

    for (int i = 0; i < 10; i++) {
        if ('A' <= X[i] && X[i] <= 'Z') {
            printf(" %c", X[i]);

        }

    }


}
