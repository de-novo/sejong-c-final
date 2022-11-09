
#include <stdio.h>
int add(int x,int y);


void eight1() {

    int N;
    scanf("%d",&N);
    int sum=0;
    for(int i = 1 ; i<= N ; i++){
        sum = add(sum,i);

    }

    printf("%d",sum);
}

