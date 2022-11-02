#include <stdio.h>

void seven8() {
    int N;
    int X[10]={0};
    int Y[10]={0};
    scanf("%d", &N);
    int i = 0;
    while (1){
        int k= N%10;
        X[i] = k;
        if(k==N){
            break;
        }
        N/=10;
        i++;
    }

    for(int i=0; i<10;i++){
        if(X[i]!=0){
            printf(" %d",X[i]);

        }
    }

}
