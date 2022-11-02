#include <stdio.h>

void seven2() {
    int a[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int i =0; i<10;i++){
        sum+=a[i];
    }

    printf("%d",sum);
}
