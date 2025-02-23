public class insertionsort{
    public static void main(String args[]){
        // Initialize the array to be sorted
        int[] array = {2,4,3,1,7};

        // Get the size of the array
        int sizeofarray = array.length;
    
        for(int i=1; i<sizeofarray; i++){
            // Store the current element as the key
            int key = array[i];
            int j = i-1;

            while(j>=0 && key<array[j]){
                array[j+1] = array[j];
                j--;
            }
            // Insert the key at the correct position in the sorted part of the array
            array[j+1] = key;

        }

        for(int num: array){
            System.out.print(num + " ");
        }
    }
}