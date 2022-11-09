
#include <stdio.h>

void seven_a_4() {
    // 몇개의 정수를 받을지 입력받는다
    int N;
    scanf("%d", &N);


    //배열을 입력받는다.
    int X[20];
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    //입력받은 배열을 뒤에서부터 출력해준다.
    //4-1
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", X[i]);
    }

    //4-2
    printf("\n");
    // 3개단위로 끊어서 최대값을 받을 배열을 선언한다
    int max[20];

    // 3개단위로 끊어서 최소값을 받을 배열을 선언한다
    int min[20];

    //3개로 끊었을시 몇개인지 계산한다.
    int num = (N - 1) / 3;

//    printf("%num:d\n", num);
    // 반복문으로 3개단위로 끊어준다.
    for (int i = 0; i <= num; i++) {
        //3개중 최대값과
        int max_value = X[i * 3];
        //최소값을 받아준다.
        int min_value = X[i * 3];


        //최대값과 최소값을 구한다.
        for (int j = i * 3; j < (i + 1) * 3 && j <= N - 1; j++) {
//            printf("j:%d\n", j);
//            printf("X[j]:%d\n", X[j]);

            max_value = X[j] > max_value ? X[j] : max_value;
            min_value = X[j] < min_value ? X[j] : min_value;

        }

        //i번째에 최소값 최대값을 저장해준다.
        max[i] = max_value;
        min[i] = min_value;
    }

    //반복문을 이용하여 최대값을 출력해준다.
    for (int i = 0; i <= num; i++) {
        printf("%d ", max[i]);
    }
    printf("\n");
    //반복문을 이용하여 최소값을 출력해준다.
    for (int i = 0; i <= num; i++) {
        printf("%d ", min[i]);
    }
    printf("\n");


    //4-3
    // while을 이용하여 max, min 배열의 원소가 1개일때까지 구해준다.
    while (1) {
        if (num == 0) { break; }

        //원소개수를 저장할 q (위에서의 N)
        int q = num + 1;
        //3개단위로 끊을경우 몇번 돌려야하는지 계산 num
        num = (num) / 3;
//        printf("num: %d\n", num);

        //반복문을 이용하여 3개단위로 끊어준다.
        for (int i = 0; i <= num; i++) {
            int max_value = max[i * 3];
            int min_value = min[i * 3];
//            printf("q: %d\n", q);

//            printf("i: %d\n", i);

            //반복문을 이용하여 최대값,최소값을 구해준다.
            for (int j = i * 3; j < (i + 1) * 3 && j <= q - 1; j++) {
//                printf("j: %d\n", j);
                max_value = max[j] > max_value ? max[j] : max_value;
                min_value = min[j] < min_value ? min[j] : min_value;
            }
            //i번째에 max와 min값을 저장해준다.
            max[i] = max_value;
            min[i] = min_value;
        }
        //반복문을 이용하여 max값을 출력해준다.
        for (int i = 0; i <= num; i++) {
            printf("%d ", max[i]);
        }
        printf("\n");
        //반복문을 이용하여 min값을 출력해준다.

        for (int i = 0; i <= num; i++) {
            printf("%d ", min[i]);
        }
        printf("\n");



    }


}


