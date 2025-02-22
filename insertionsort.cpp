//Insertion sort in C++

#include <iostream>   //include the input-output stream for displaying the output
using namespace std;

int main(){

    int array[5] = {2,4,3,1,7}; //initialize the array with 5 elements

    cout << "Before the sorted array"<< endl;
    for(int p=0; p<5; p++){
        cout << array[p] << " ";
    }
    cout<<endl;
    
    cout << "After sorted array"<<endl;
    // Outer loop for iterating through each element of the array starting from index 1
    for (int i=1; i<5; i++){
        int key = array[i];    // Set the current element as the 'key'
        int j =i-1;            //// Set the index for comparison (one position before 'i')
        while(j>=0 && key<array[j]){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }

    // // Output the sorted array
    for(int k=0; k<5; k++){
        cout << array[k] << " ";
    }

    return 0;  //// Return 0 to indicate successful execution
}
