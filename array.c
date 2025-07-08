#include <stdio.h>


int main (){

    int arr[5], *p;
    p=arr;

    printf("Enter array elements: \n");
    for(int i=0; i<5; i++){
        scanf("%d",&p[i]);
    }

    printf("Array elements are \n");
    for(int i=0; i<5; i++){
        printf("%d\n",p[i]);
    }

    return 0;
}

