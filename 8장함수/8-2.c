
#include <stdio.h>

int addXtoY(int x,int y);

void eight2() {

    int N,M;
    scanf("%d %d",&N,&M);
    int sum =addXtoY(N,M);


    printf("%d",sum);
}

