#include <stdio.h>

int main (){

    int *p[5], *q, **r, s=5;
    q=&s;
    r=&q;
    printf("%d\n", **r);


    printf("%p\n", p[0]);
    printf("%p\n", p[1]);
    printf("%p\n", p[2]);
    printf("%p\n", p[3]);
    printf("%p\n\n", p[4]);

    printf("Enter array elements: \n");
    for(int i=0; i<5; i++){
        scanf("%d",&p[i]);
    }

    for(int i=0; i<5; i++){
        printf("%d is in %p address\n", p[i], p[i]);
    }

}
