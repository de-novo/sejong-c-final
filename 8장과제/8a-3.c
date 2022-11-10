
#include <stdio.h>

// 함수
int multiple(int x, int y) {
    //X가 Y의 배수면 1을 반환.
    if (x % y == 0)return 1;
    //아니면 0반환
    return 0;
};
// 둘중 큰수를 반환.
int maximum(int x, int y) {
    if (x > y) return x;
    return y;
}

int digit_maximum(int x) {
    int max = 0;
    // 각자리수를 비교.
    while (1) {
        int k = x % 10;
        //  가장큰 자리수를 반환.
        if (max < k)max = maximum(max, k);
        if (x == k) {
            break;
        }
        x /= 10;
    }
    // //  가장큰 자리수를 반환.
    return max;

}


void eight_a3() {
    //정수 3개 입력받기.
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);
    //최대값을 저장할 변서 선언.
    int max = 0;
    // N~M 사이 수 비교.
    for (int i = N; i <= M; i++) {
        // 만약 i가 K의 배수이면,
        if (multiple(i, K)) {
            // 가장큰 자리수 반환.
            max = maximum(digit_maximum(i), max);
        } else {
            // 그렇지않으면
            // 나머지가 가장큰것을 반환.
            max = maximum(max, i % K);
        }
    }
    //max 출력
    printf("%d", max);

}
