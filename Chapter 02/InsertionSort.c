#include <stdio.h>
#include <stdlib.h>

void nonDecreasingInsertionSort(int *array, int arrayLength)
{
    int i, j, key;

    for(j=1; j<arrayLength; j++) {
        key = array[j];
        i = j-1;

        while(i>=0 && array[i]>key) {
            array[i+1] = array[i];
            i = i-1;
        }

        array[i+1] = key;
    }
}

void nonIncreasingInsertionSort(int *array, int arrayLength)
{
    int i, j, key;

    for(j=1; j<arrayLength; j++) {
        key = array[j];
        i = j-1;

        while(i>=0 && array[i]<key) {
            array[i+1] = array[i];
            i = i-1;
        }

        array[i+1] = key;
    }
}

int main()
{
    int *array, arrayLength, i;

    printf("How many numbers will you enter? : ");
    scanf("%d", &arrayLength);

    array = (int*)malloc(sizeof(int) * arrayLength);

    for(i=0; i<arrayLength; i++) {
        printf("Enter %d. number : ",i+1);
        scanf("%d", &array[i]);
    }

    nonDecreasingInsertionSort(array,arrayLength);
    printf("\nYour array after the non-decreasing sorting : \n");

    for(i=0; i<arrayLength; i++) {
        printf("%d ", array[i]);
    }

    nonIncreasingInsertionSort(array,arrayLength);
    printf("\nYour array after the non-increasing sorting : \n");

    for(i=0; i<arrayLength; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
