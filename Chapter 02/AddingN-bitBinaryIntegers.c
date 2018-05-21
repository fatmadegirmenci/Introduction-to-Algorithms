#include <stdio.h>
#include <stdlib.h>

void write(int *array, int arrayLength)
{
    int i;

    printf("\nNew array : ");
    for(i=0; i<arrayLength; i++){
        printf("%d ", array[i]);
    }
}

void addingNBitBinaryIntegers(int *firstArray, int *secondArray, int arrayLength)
{
    int i;
    int newArray[arrayLength+1], carry = 0;

    for(i=arrayLength; i>=0; i--) {

        newArray[i+1] = firstArray[i] + secondArray[i] + carry;
        if(newArray[i+1]>=2) {
            carry = 1;
        }
        else {
            carry = 0;
        }
        newArray[i+1] = newArray[i+1]%2;

        newArray[0] = carry;
    }

    write(newArray, arrayLength+1);
}

int main()
{
    int *firstArray, *secondArray, arrayLength, i;

    printf("Please enter array length: ");
    scanf("%d", &arrayLength);

    firstArray = (int *)malloc(sizeof(int) * arrayLength);
    secondArray = (int *)malloc(sizeof(int) * arrayLength);

    printf("\nEnter first binary integer :");

    for(i=0; i<arrayLength; i++){
        scanf("%d", &firstArray[i]);
    }

    printf("\nEnter second binary integer :");

    for(i=0; i<arrayLength; i++){
        scanf("%d", &secondArray[i]);
    }

    addingNBitBinaryIntegers(firstArray, secondArray, arrayLength);

    return 0;
}
