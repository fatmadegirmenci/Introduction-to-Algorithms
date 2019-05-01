package linearsearch;

public class LinearSearch {
    public static void main(String[] args) {
        int[] A = {1, 2, 3, 4, 5};
        int v = 1;
        
        if(linearSearch(A, v) != -1) {
            System.out.println("found at " + linearSearch(A, v)+ " index");
        } else {
            System.out.println("not found");
        }
    }
    
    public static int linearSearch(int[]A, int v) {
        int i = -1, j;
        
        for(j=0; j<A.length; j++) {
            if(A[j] == v) {
                i = j;
                return i;
            }
        }
        
        return i;
    }
}
