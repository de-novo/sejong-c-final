
#include <stdio.h>
int N;
void die3(int x,int y,int z) {

    if(N==x+y+z){
        printf("%d %d %d\n",x,y,z);
    }
}

void die2(int x,int y) {
    for(int i =1; i<=6; i++){
        die3(x,y,i);
    }
}

void die1(int x) {

    for(int i =1; i<=6; i++){
        die2(x,i);
    }


}

void eight10() {
    scanf("%d",&N);
    die1(1);
    die1(2);
    die1(3);
    die1(4);
    die1(5);
    die1(6);

}

//
// Created by denovo on 2022/11/09.
//