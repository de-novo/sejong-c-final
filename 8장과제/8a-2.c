
#include <stdio.h>

//배열 선언
int A[100000];

// 함수
int max_num(int N1, int N2);

int min_num(int N1, int N2);

void eight_a2() {
    //인덱스
    int i = 0;
    while (1) {
        // 정수 n을 입력 받는다.
        int n;
        scanf("%d", &n);
        // n==0 일경우 멈춘다,
        if (n == 0) {
            break;
        }
        // n을 A[i]에 저장한다.
        A[i] = n;
        // 반복마다 i에 1을 더해준다.
        i++;
    }

    // 정수 m을 받는다.
    int m;
    scanf("%d", &m);
    for (int k = 0; k < m; k++) {
        // 인덱스를 입력받는다.
        int S, E;
        scanf("%d %d", &S, &E);

        // S~E 를 S와 E사이 값을 기준으로 앞 뒤를 변경해준다.
        for (int j = 0; j < (E - S + 1) / 2; j++) {
            // 잠시 A[E - j];를 저장할 변수 e
            int e = A[E - j];
            //  A[E - j] 와A[S + j];를 변경해준다.
            A[E - j] = A[S + j];
            A[S + j] = e;
        }

        // 바뀐배열을 출력해준다.
        for (int j = 0; j < i; j++) {
            printf("%d ", A[j]);
        }
        printf("\n");
        // 최대값고 최소값을 출력해준다.
        printf("%d %d\n", max_num(S, E), min_num(S, E));

    }
}

int max_num(int N1, int N2) {
    int max = 0;

    // A[N1]~A[N2] 최대값을 구해준다.
    for (int i = N1; i <= N2; i++) {
        if (A[i] > max)max = A[i];
    }
    // 최대값을 반환한다.
    return max;


}

int min_num(int N1, int N2) {
    int min = A[N1];
    // A[N1]~A[N2] 최소값을 구해준다.

    for (int i = N1; i <= N2; i++) {
        if (A[i] < min)min = A[i];
    }
    // 최소값을 반환한다.
    return min;


}