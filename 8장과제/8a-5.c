
#include <stdio.h>

int add_digits(int num) {
    if(num==0){
        return 0;
    }
    int sum = 0;

    while (1) {
        // 1의 자리를 구한다.
        int k = num % 10;
        // sum에 k를 더한다
        sum += k;
        // 만약 k와 num이 같을경우 멈춘다.
        if (k == num) {
            break;
        }
        // num 을 10으로 나눈다.
        num /= 10;
    }
    return sum;

}


void eight_a5() {
    // 디지털근의 최소값을 저장할 변수
    int min = 10;
    // 입력받은 수를 저장할 변수
    int num = 0;

    while (1) {
        //n 을 입력받는다.
        int n;
        scanf("%d", &n);

        // n이 음수이면 멈춤
        if (n < 0) {
            break;
        }
        // 자릿수의 합을 저장할 변수 s
        int s = n;
        while (1) {
            // s가 add_digits(s)와 같을경우 멈춘다.
            if (s == add_digits(s)) {
                break;
            }
//            s 에 add_digits(s)를 저장한다.
            s = add_digits(s);
        }
        // 만약 min이 현재 s보다 작을경우
        if (min > s) {
            // num = n , min = s
            num = n;
            min = s;
        }

    }
    // 출력
    printf("%d %d", num, min);

}
