
#include <stdio.h>

void seven_a_3() {

    // 정수를 받을 배열을 선언한다
    int X[20] = {'\0'};
    // 세개의 수를 받을 변수를 선언한다
    int F, R, M;

    scanf("%d %d %d", &F, &R, &M);

    // 1~20까지 정수를 배열에 저장한다.
    for (int i = 0; i < 20; i++) {
        X[i] = i + 1;
    }
    // R에서 M번째 수를 저장한다 (T는 i+1 수 를 저장, n은 현재의 수를 저장.)
    int t = X[R-M+1];
    int n ;
    for (int i =R-M+1; i <= R; i++) {
//        printf("%d ", X[i]);
        // i가 R이 아니라면 X[i+1]에 n을 저장한다.
        if(i!= R){
            n=  t;
            t = X[i+1];
            X[i+1]=n;
        }
        else{
            //i==R이라면 R-M+1 (처음 수를 마지막수로 변경한다.)
            X[R-M+1]=t;
        }



    }
    printf("\n");
    //배열을 출력해준다.
    for (int i = 0; i < 20; i++) {
        printf("%d ", X[i]);
    }
}


