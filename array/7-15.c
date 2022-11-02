#include <stdio.h>

void seven15() {
    char X[10]={'\0'};
    char Y[10]={'\0'};

    for (int i = 0; i < 10; i++) {
        scanf("%c", &X[i]);
    }
    for (int i = 0; i < 10; i++) {
        int f = 0;
        for (int j = 0; j < 10; j++) {

            if (X[i] == X[j]) {
                f += 1;
            }

        }
        if (f == 1){
            Y[i]=X[i];
        }

    }
    for (int i = 0; i < 10; i++) {
        if(Y[i]!='\0'){
            printf(" %c", Y[i]);

        }

    }
//    for(int i=0;i<10;i++){
//        printf(" %c",Y[i]);
//
//

//    }


}
