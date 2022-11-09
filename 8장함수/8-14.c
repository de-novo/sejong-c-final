
#include <stdio.h>

int is_prime(int x);
int next_prime(int x);
void eight14() {

    int n,m;
    scanf("%d %d", &n,&m);

    for(int i=0;i<m;i++){
        n = next_prime(n);
        printf(" %d",n);
    }

}
