#include <stdio.h>
#include <stdlib.h>

int linearSearch(int *array,int arrayLength, int wantedElement)
{
    int i, j;

    for(j=0; j<arrayLength; j++) {
        if(array[j] == wantedElement) {
            return j;
        }
    }

    return -1;
}

int main()
{
    int array[10] = {1,5,11,95,36,32,15,2,9,56}, wantedElement, returnValue;

    printf("Enter the element you're looking for: ");
    scanf("%d", &wantedElement);

    returnValue = linearSearch(array,10,wantedElement);
    if(returnValue == -1) {
        printf("The element has not found.");
    }
    else {
        printf("The element has found in the %d. indictor.", returnValue);
    }

    return 0;
}
