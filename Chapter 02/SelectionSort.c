#include <stdio.h>
#include <stdlib.h>

//Big to Small
void selectionSort(int *array, int n)
{
    int i, j, temp, min;

    for(i=0; i<n-1; i++) {
        min = i;

        for(j=i+1; j<n; j++) {
            if(array[j]<array[min]){
                min = j;
            }
        }

        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}

//Small to Big
void selectionSort2(int *array, int n)
{
    int i, j, temp, max;

    for(i=0; i<n-1; i++) {
        max = i;

        for(j=i+1; j<n; j++) {
            if(array[j]>array[max]){
                max = j;
            }
        }
        
        temp = array[max];
        array[max] = array[i];
        array[i] = temp;
    }
}

int main()
{
    int *array, n, i;

    array = (int*)malloc(sizeof(int) * n);

    printf("enter array length: ");
    scanf("%d", &n);

    array = (int*)malloc(sizeof(int) * n);

    for(i=0; i<n; i++) {
        printf("\nEnter %d. element: ", i);
        scanf("%d", &array[i]);
    }

    selectionSort(array, n);

    printf("\nAfter the sorting : \n\n");

    for(i=0; i<n; i++) {
        printf("%d ", array[i]);
    }

    printf("\n\n");

    selectionSort2(array, n);

    for(i=0; i<n; i++) {
        printf("%d ", array[i]);
    }

    printf("\n\n");

    return 0;
}
