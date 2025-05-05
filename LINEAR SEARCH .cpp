#include <iostream>
using namespace std;

// Function to perform linear search using pointers
int linearsearch(int* ptr, int size, int key){
    for(int i=0; i<size; i++){
        if(*(ptr + i)==key){
            return i;
        }
    }
    return -1;
}

int main() {
    int size,key,result;

    
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<size;i++) {
        cin>>*(arr+i);
    }

    cout<<"Enter the element to search for: ";
    cin>>key;

    result = linearsearch(arr, size, key);

    if (result != -1) {
        cout<<"Element found at index: " <<result<<endl;
    } else {
        cout<<"Element not found in the array."<<endl;
    }

    return 0;
}
