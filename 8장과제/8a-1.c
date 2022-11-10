
#include <stdio.h>

double Cal(int cash, int inter, double balance) {
    // 입금하였을때.
    if (cash > 0) {
        printf("%d %d", cash, 0);
        //잔액 =( 잔액 + 캐시 )(1+이자)
        balance = (balance + (double) cash) * (1 + (double) inter / 100);
    } else { // 출금하였을때 (cash > 0 일때
        // cash 형변환.
        double cashDou = (double) cash;
        // 출금금액 잔액보다 클경우.
        if (cashDou * -1 > balance) {
            if (balance == 0) { //잔액이 0원일경우
                printf("%d %d", 0, 0);
            } else {   // 잔액이 0원보다 클경우

                printf("%d %.2lf", 0, balance);
            }
            balance = 0;
        } else { //잔액이 출금금액 보다 많은경우.
            printf("%d %d", 0, cash * -1);
            balance = (balance + cashDou);
        }
    }
    return balance;
}

void eight_a1() {
    //n 반복 회수, m 이자.
    int n, m;
    scanf("%d %d", &n, &m);

    // 처음잔액은 0 원
    double balance = 0;
    for (int i = 0; i < n; i++) {
        // 입출금금액입력.
        int cash;
        scanf("%d", &cash);

        // 잔액 함수로 잔액 계산.
        balance = Cal(cash, m, balance);
        printf(" %0.2lf\n", balance);
    }

}
