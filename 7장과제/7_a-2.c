
#include <stdio.h>

void seven_a_2() {

    // 문자를 받을 배열을 선언한다
    char X[100] = {'\0'};
    char Y[100] = {'\0'};


    // 문자를 몇개 받았는지 저장할 변수 i를 선언
    int i = 0;
    // 반복문을 통해 문자를 받음
    while (1) {
        char c;
        scanf("%c", &c);
        // ! 를 받을시 종료 // i>= 일시 종료
        if (c == '!' || i >= 100) {
            break;
        }

        X[i] = c;
        //입력받고 i 1증가
        i++;
    }
    //엔터를 받아 버리기위한 getchar()
    getchar();

    //몇글자를 받을지 저장할 변수 n
    int n;
    scanf("%d", &n);
    //엔터를 받아 버리기위한 getchar()
    getchar();

    // n만큼의 배열 선언
    char a[100]={'\0'};

    // 찾을 문자 입력받기.
    for (int j = 0; j < n; j++) {
        scanf("%c", &a[j]);
    }
//    for (int j = 0; j < n; j++) {
//        printf("%c", &a[j]);
//    }
    //겹치는것을 제외한후 몇개의 문자가 배열에있는지 저장할 num
    int num = 0;
    //반복문을 통해 중복제거
    for (int j = 0; j < i; j++) {
        // flag 선언
        int f = 0;
        // Y에 문자가 있나 검사
        for (int k = 0; k < num; k++) {
            // 만약 Y에 문자가 있을시 멈춤
            if (X[j] == Y[k]) {
                f = 1;
                break;
            }

        }
        // Y에 문자가없을시 Y에 추가해주고 num 1증가
        if (f == 0) {
            Y[num] = X[j];
            num += 1;
        }
    }


    // 중복제거후 문자 출력


    //찾는 단어가 몇번째부터 시작하는지 저장할 변수 (최대 100 이기에 100으로 초기화)
    int index = 100;

    // 중복제거한 문자열 Y에서 단어찾기
    for (int j = 0; j <= num - n; j++) {
//        if (index != 100) {
//            break;
//        }
        // 플래그선언
        int f = 0;

        // 반복문을 통해 문자 비교
        for (int k = 0; k < n; k++) {
            //만약 다른것이있다면 f=1
//            printf("Y[j + %d]:%c a[%d]:%c",k,Y[j + k],k,a[k]);
//            printf("\n");
            if (Y[j + k] != a[k]) {
                f = 1;
                break;
            }
        }
//        printf("\n");
        // 끝까지 0일시 index 바꿔주기
        if (f == 0) {
            index = j;
        }
//        qwe wer ert rty !
//                3
//        e r t

/*
 * abcdefgstopabcdefgsssstttop jklmnop!
4
stop
abcdefgstop jklmn
 */
//      qwe rty
    }
    //Y에 저장된 문자 출력
    for (int k = 0; k < num; k++) {
        printf("%c", Y[k]);
    }
    printf("\n");

    // 단어를 못찾았을시 none 출력
    if (index == 100) {
        printf("none");

    } else {

        //단어를 index 출력
        printf("%d", index);

    }

}


