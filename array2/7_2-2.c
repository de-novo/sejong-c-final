#include <stdio.h>

void seven2_2() {
//    int N;
    char X[7]={'\0'};
    for (int i = 0; i < 7; i++) {
        scanf("%c", &X[i]);
    }
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        if(X[i]=='c'&&X[i+1]=='a'&&X[i+2]=='t')cnt++;
    }
    printf("%d",cnt);


//    getchar();


}
