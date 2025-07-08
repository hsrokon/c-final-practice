#include <stdio.h>

int main() {
    int arr[] = {3, 8, 1, 7, 2};
    int *p = arr;

    int max = p[0];

    for(int i=0; i<5; i++){
        if(p[i]>max){
            max=p[i];
        }
    }

    printf("Maximum element: %d\n", max);
    return 0;
}
