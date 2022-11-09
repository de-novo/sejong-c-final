
#include <stdio.h>

int a, b, c;

int count_strike(int x, int y, int z) {
    int S = 0;
    if (x == a) {
        S++;
    }
    if (y == b) {
        S++;
    }
    if (z == c) {
        S++;
    }
    return S;
}

int count_ball(int x, int y, int z) {
    int B=0;
    if ( a == y || a == z) {
        B++;
    }
    if ( b == x || b == z) {

        B++;
    }
    if (c == x || c == y) {
        B++;
    }
    return B;
}

void eight11() {
    scanf("%d %d %d", &a, &b, &c);

    while (1) {
        int x, y, z;

        scanf("%d %d %d", &x, &y, &z);
        int S = count_strike(x, y, z);
        int B = count_ball(x, y, z);

        printf("%dS%dB\n", S, B);
        if (S == 3)break;


    }

}

//
// Created by denovo on 2022/11/09.
//