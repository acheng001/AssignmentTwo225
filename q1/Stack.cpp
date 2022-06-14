#include <iostream>
#include "Stack.h"

#include <stdexcept>
using namespace std;
// W ethrow the std::logic_error in the argument for catch when we are doing try and catch

// Constructor
Stack::Stack(){
    // Set the size to be zero as there are zero elements
    size = 0;
}

// Push function
void Stack:: push(int x){
    if(size == 0){
        arr[0] = x;
        size++;
    }
    else if (size == 8){
        // Throw stackFull exception
        throw overflow_error("Stack is already full! ");
        //std::logic_error
    }
    else{
        int decreasedSize = size-1;
        // Start from the end
        for(int i = decreasedSize; i > 0; i--){
            arr[i+1] = arr[i];
        }
        int storeOne = arr[0];
        arr[0] = x;
        arr[1] = storeOne;
        // Increase the size by one as we are adding in a new number
        size++;
        //cout<<size<<endl;
    }
}

// Pop function
int Stack:: pop(){
    if(size == 0 ){
        // Throw stackEmpty exception
        throw underflow_error("Stack is already empty so you can't pop! ");
        return 0;
    }
    else if (size == 1){
        // Delete the first element
        size--;
        // Save the element we are deleting
        int temp = arr[0];
        arr[0] = arr[1];
        return temp;
    }
    else{
        int decreasedSize = size-1;
        //int increasedSize = size++;
        int store = arr[0];
        for(int i = 0; i < size; i++){
            // From this we have shifted our elements all the way to the left by one but we have one extra last element
            arr[i] = arr[i+1];
        }
        // MIGHT HAVE TO FIX THIS PART SO WATCH OUT
        arr[decreasedSize] = arr[size]; // -1 represents the end of the array
        // Decrement the size as we are removing a number
        size--;
        //cout<<"Popped size: "<<size<<endl;
        return store;
    }
}

// Peek function
int Stack:: peek() const{
    // We return the top most element
    // If size is zero, we dont return any elements
    if(size == 0){
        throw underflow_error("Stack is already empty so you can't peek! ");
        return 0;
    }
    // Else we return the first element in the array which is the top most element
    else{
        return arr[0];
    }
}

// isEmpty function
bool Stack:: isEmpty() const{
    return size == 0;
}
