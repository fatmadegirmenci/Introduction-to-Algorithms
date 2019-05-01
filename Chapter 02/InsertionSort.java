package ınsertionsort;

public class InsertionSort {

    public static void main(String[] args) {
        int[] A = {5,2,4,6,1,3};
        
        nonDecreasingInsertionSort(A);
        for(int i=0; i<A.length; i++)
            System.out.print(A[i] + " ");
        
        System.out.println("");
        
        nonIncreasingInsertionSort(A);
        for(int i=0; i<A.length; i++)
            System.out.print(A[i] + " ");
        
    }
    
    public static void nonDecreasingInsertionSort(int[] A) {
        int i, j, key;
        for(j=1; j<A.length; j++) {
            key = A[j];
            i=j-1;
            
            while(i>=0 && A[i]>key) {
                A[i+1] = A[i];
                i--;
            }
            A[i+1] = key;
        }
    }
    
    public static void nonIncreasingInsertionSort(int[] A) {
        int i, j, key;
        for(j=1; j<A.length; j++) {
            key = A[j];
            i=j-1;
            
            while(i>=0 && A[i]<key) {
                A[i+1] = A[i];
                i--;
            }
            A[i+1] = key;
        }
    }
}
