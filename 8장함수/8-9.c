
#include <stdio.h>

int max1=NULL;
int max2= NULL;
void update_max(int n){
    if(max1==NULL)max1=n;
    else if(max2==NULL&&max1>n)max2=n;
    else if(max1<n) {
        max2= max1;
        max1= n;
    }else if(max2<n){
        max2= n;

    }

}

void eight9() {
    while (1){
        int N;
        scanf("%d", &N);
        if(N==0){
            break;
        }
        update_max(N);
    }

    printf("%d %d",max1,max2);
}

//
// Created by denovo on 2022/11/09.
//