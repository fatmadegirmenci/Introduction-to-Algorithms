#include <stdio.h>
#include <stdlib.h>

//p : low, r : high, q : middle, L : left array, R : right array

void Merge(int *array, int p, int q, int r) {
    int i, j, k;

    int n1 = q - p +1; // length of L
    int n2 = r - q; // length of R

    int L[n1+1], R[n2+1];

    /* or
     * int *L = (int*)malloc(sizeof(int) * (n1+1)); //left array
     * int *R = (int*)malloc(sizeof(int) * (n2+1)); //right array
     */

    for(i=0; i<n1; i++) {
        L[i] = array[p+i];
    }

    for(j=0; j<n2; j++) {
        R[j] = array[q+j+1];
    }

    i = j = 0;

    for(k=p; k<=r; k++) {

        if(L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        }
        else {
            array[k] = R[j];
            j++;
        }
    }
}

void MergeSort(int *array, int p, int r) {
    int q;

    if(p<r) {
        q = (p + r)/2;
        MergeSort(array, p, q);
        MergeSort(array, q+1, r);
        Merge(array, p, q, r);
    }
}

int main()
{
    int *array, p, r, i, n;

    array = (int*)malloc(sizeof(int) * n);

    printf("enter array length: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("\nEnter %d. element: ", i);
        scanf("%d", &array[i]);
    }

    p = 0, r = n-1;

    MergeSort(array, p, r);
    printf("\n\n");

    for(i=0; i<n; i++) {
        printf("%d ", array[i]);
    }

    printf("\n\n");
    
    return 0;
}
