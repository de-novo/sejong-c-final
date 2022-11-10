
#include <stdio.h>
// 수가 소수인지 확인하는 함수
int is_prime_number(int num) {
    // 1은 소수가 아님.
    if(num==1){
        return 0;
    }
    //2~num 까지 반복문을 돌린다
    for (int i = 2; i <= num; i++) {
        // num%i 가 0이고 i!=num 일때 0을 반환한다
        if (num % i == 0 && i != num) {
            return 0;
        }
    }
    //그외는 소수이므로 1을 반환.
    return 1;
}

int count_prime_number(int cnt, int num) {
    // 소수이고 num<=100 일때 cnt+1을 반환
    if (is_prime_number(num) && num < 100) {
        return cnt + 1;
    }
    // 그외 0반환.
    return 0;

}

void eight_a4() {
    //n 을 입력받는다.
    int n;
    scanf("%d", &n);
    // 소수가 연속하여 나온 최대갯수
    int cnt = 0;
    // 그때 마지막 소수
    int last = 0;


    //현재 연속해서 나온 소수개수
    int now_cnt = 0;
    //n 번 입력을받음
    for (int i = 0; i < n; i++) {
        int k;
        scanf("%d", &k);
        // 현재 개수
        int p = count_prime_number(now_cnt, k);
//        printf("%d\n", p);

        // 현재 개수가 전 개수보다 크다면
        if (cnt < p) {
            // last에 마지막 소수 저장.
            last = k;
            //현재 개수저장.
            cnt = p;
        }
        // 지금 개수에 p 저장.
        now_cnt = p;
    }
    // cnt==0 이면 cnt만 출력.
    if (cnt == 0) {
        printf("%d", cnt);
    } else {
        //그외 cnt와 last출력
        printf("%d\n", cnt);
        printf("%d", last);
    }


}
