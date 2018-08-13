#include <stdio.h>
#include <stdlib.h>

//p: low, r: high, q: middle

void SelectionSort(int *array, int n)
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

///this function returns -1 if the key is not found.
int IterativeBinarySearch(int *array, int p, int r, int key) {

    while(p <= r) {
        int q = (p+r)/2;

        if(key == array[q]) {
            return q;
        }

        if(key<array[q]) {
            r = q-1;
        }
        else {
            p = q+1;
        }
    }
    return -1;
}

int main()
{
    int array[10] = {1,5,11,95,36,32,15,2,9,56}, key, returnValue, i;

    printf("Enter the element you're looking for: ");
    scanf("%d", &key);

    //Firstly we must to sort this array
    SelectionSort(array, 10);

    returnValue = IterativeBinarySearch(array, 0, 9, key);
    
    if(returnValue == -1) {
        printf("\nThe element that you are looking for is not found.");
    }
    else {
        printf("\nThe element that you are looking for is found in %d. index.", returnValue);
    }

    printf("\n\n");

    return 0;
}
