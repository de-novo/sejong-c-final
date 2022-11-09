
#include <stdio.h>

void seven_a_5() {

//    배열을 입력받는다.
// 100째 이후 음수를 입력할수있기에 101 로 초기화
    int X[101] = {0};
    int Y[101] = {0};


    // 몇번째까지 입력받았나 인덱스 값을 저장할 변수 선언.
    int in = 0;
    // 입력받기.

    for (in = 0; in < 101; in++) {
        int N;
        scanf("%d", &N);

        X[in] = N;
        //음수를 입력받으면 멈춤
        if (N < 0) {
            break;
        }
    }
    // 몇번째까지 입력받았나 인덱스 값을 저장할 변수 선언.
    int in2 = 0;
    //입력받기
    for (in2 = 0; in2 < 101; in2++) {
        int N;
        scanf("%d", &N);

        Y[in2] = N;
        // 음수를 입력받으면 멈춤
        if (N < 0) {
            break;
        }
    }

    //합집합을 저장할 배열
    //총 겹치지않는수 100+100 을 받을수 있기에 200으로 선언
    int S[200] = {};
    // S를 -1로 초기화시켜줌
    for (int i = 0; i < 200; i++) {
        S[i] = -1;
    }



    //S에 몇번째까지 들어갔나 저장할 인덱스 변수 선언.
    int index = 0;

    //첫번째 배열에 겹치지않는 수들을 S에 저장
    for (int i = 0; i < in; ++i) {
        // flag가 0이라면 겹치지않음 (새로운수
        int flag = 0;
        // X[i] 가 음수라면 스탑
        if (X[i] < 0) {
            break;
        }
        // S에 있는 수 들과 비교하기
        for (int j = 0; j < index; ++j) {
            if (X[i] == S[j]) {
                flag = 1;
                break;
            }
        }
        // flag가 0이라면 S에 넣기.
        if (flag == 0) {
            S[index] = X[i];
            index += 1;
        }
    }
    for (int i = 0; i < in2; ++i) {
        // flag가 0이라면 겹치지않음 (새로운수

        int flag = 0;
        // Y[i] 가 음수라면 스탑
        if (Y[i] < 0) {
            break;
        }
        // S에 있는 수 들과 비교하기
        for (int j = 0; j < index; ++j) {
            if (Y[i] == S[j]) {
                flag = 1;
                break;

            }
        }
        // flag가 0이라면 S에 넣기.

        if (flag == 0) {
            S[index] = Y[i];
            index += 1;
        }
    }


    //S배열 정렬하기.
    for (int i = 0; i < index; i++) {
        //선택정렬로 정렬./
        for (int j = 0; j < index; ++j) {
            if (S[i] < S[j]) {
                int t = S[i];
                S[i] = S[j];
                S[j] = t;
            }
        }
    }
// 1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63 65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99 101 103 105 107 109 111 113 115 117 119 121 123 125 127 129 131 133 135 137 139 141 143 145 147 149 151 153 155 157 159 161 163 165 167 169 171 173 175 177 179 181 183 185 187 189 191 193 195 197 199
// 0 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 56 58 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88 90 92 94 96 98 100 102 104 106 108 110 112 114 116 118 120 122 124 126 128 130 132 134 136 138 140 142 144 146 148 150 152 154 156 158 160 162 164 166 168 170 172 174 176 178 180 182 184 186 188 190 192 194 196 198
// S출력하기
    for (int j = 0; j < index; ++j) {
        printf(" %d", S[j]);

    }

}


