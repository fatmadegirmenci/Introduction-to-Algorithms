#include <stdio.h>
#include <stdlib.h>

void swap(int *array, int a, int b) {
    int tmp;
    
    tmp = array[a];
    array[a] = array[b];
    array[b] = tmp;
}

void BubbleSort(int *array, int n) {
    int i, j;

    for(i=0; i<n-1; i++) {
        for(j=n-1; j>i; j--) {
            if(array[j] < array[j-1]) {
                swap(array, j, j-1);
            }
        }
    }
}

int main()
{
    int array[10] = {9,8,7,6,5,4,3,2,1,0};
    int i;

    printf("Before the sorting: \n");
    for(i=0; i<10; i++) {
        printf(" %d ", array[i]);
    }

    BubbleSort(array, 10);

    printf("\nAfter the sorting: \n");
    for(i=0; i<10; i++) {
        printf(" %d ", array[i]);
    }

    return 0;
}
