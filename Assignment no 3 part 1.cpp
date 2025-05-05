#include <iostream>
using namespace std;

// Function to perform bubble sort using pointers
void Bubblesort(int *ptr, int size){
    for(int i=0; i<size-1; i++) {
        for(int j=0; j<size-1-i; j++){
            // Use pointers to access and swap elements if needed
            if(*(ptr+j) > *(ptr+j+1)){
                int temp= *(ptr+j);
                *(ptr+j)= *(ptr+j+1);
                *(ptr+j+1)=temp;
            }
        }
    }
}

int main() {

    int size;

    // Prompt user to enter the size of the array
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;

    // Declare the array
    int arr[size];

    // Prompt user to enter the elements of the array
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }

    // Sort the array using bubble sort
    Bubblesort(arr, size);

    // Display the sorted array
    cout<<"The sorted array is: " <<endl;
    for(int i=0; i<size; i++) {
        cout<<*(arr + i) << " ";
    }
    cout<<endl;

    return 0;
}
