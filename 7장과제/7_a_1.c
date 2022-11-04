//
// Created by denovo on 2022/11/02.
//
#include <stdio.h>

void seven_a_1() {

    // 수를 입력받을 배열을 선언한다
    int X[100] = {'\0'};

    // 회문수를 저장할 변수를 선언한다.
    int Y[100] = {0};

    //제거할 인덱스 번호를 받을 변수를 선언한다.
    int M1, M2;
    // 숫자를 몇개 받았는지를 저장할 변수를 선언한다.
    int num = 0;
    scanf("%d %d", &M1, &M2);

    //반복문을 통해 수를 받아 X에 저장한다.
    while (1) {
        int N;
        scanf("%d", &N);
        if (N <= 0 || num >= 100) {

            break;
        }
        X[num] = N;
        num += 1;

    }

    //반복문을 통해 회문수를 찾아준다.
    for (int i = 0; i < num; i++) {
        // 현재 X[i]에 대한 각 자리를 저장해줄 배열을 선언.
        int Z[100];
        int z = 0; //인덱스
        int j = 0; //몇자리수인지
        // 현재 검사중인 수
        int Q = X[i];

        //반복문을 통해 수를 분리해준다.
        while (1) {
            int k = Q % 10;
            //인덱스가 M1,M2가 아닐때만 저장해준다.
            if (j != M1 & j != M2) {
                Z[z] = k;
                z++;
            }
            j++;
            //반복문을 통해 수를 분리해준다.
            if (Q == k) {
                break;
            }

            Q /= 10;
        }

        //반복문을 통해 M1 ,M2를 제거했을때 회문구조인지 검사한다.
        for (int p = 0; p <= z / 2; p++) {

            // 절반으로 잘라서 처음과 맨끝을 검사해주면서
            // 중간값까지 검사해준다.
            if (p == z / 2) {
                Y[i] = X[i];
            }
            // Z[p] != Z[z - 1 - p]일시 회문구조가 아니기에 멈춰준다.
            if (Z[p] != Z[z - 1 - p]) {
                break;
            }

        }
    }


    //배열을 정렬해준다.
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            // Y[j]< Y[i] 일경우
            if (Y[j] < Y[i]) {
                // 서로 위치를 변경해준다
                // 잠시 수를 저장할 변수 t를 선언해준다.
                int t = Y[i];
                Y[i] = Y[j];
                Y[j] = t;
            }
        }
    }

    // 회문수가 없어 Y[0] 일경우 none을 출력한다.
    if (Y[0] == 0) {
        printf("none");
    } else {
        //그렇지 않을경우 Y에 담긴 수들을 출력해준다.
        for (int i = 0; i < num; i++) {
            if (Y[i] != 0) {
                printf("%d ", Y[i]);
            }
        }

    }


}

