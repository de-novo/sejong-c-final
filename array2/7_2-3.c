//
// Created by denovo on 2022/11/02.
//
#include <stdio.h>

void seven2_3() {

    int X[5] = {'\0'};
    for (int i = 0; i < 5; i++) {
        scanf("%d", &X[i]);
    }

    for (int i = 0; i < 5; i++) {
      for(int j = 0; j<5; j++){
          if(X[i]>X[j]){
              int t = X[i];
              X[i]=X[j];
              X[j]=t;
          }

      }

    }

//    for (int i = 0; i < 5; i++) {
//        printf("%d", X[i]);
//    }
    printf("%d\n",X[0]);
    printf("%d",X[1]);


//    getchar();


}
