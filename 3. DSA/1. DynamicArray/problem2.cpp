// Key Functionality of Dynamic Arrays
// Resizing Capability


// Resizing example
void resizeArray(int*& arr, int& oldSize, int newSize) {
    // 1. Create new array
    int* newArr = new int[newSize];
    
    // 2. Copy elements
    int copyLimit = (oldSize < newSize) ? oldSize : newSize;
    for(int i=0; i<copyLimit; i++) {
        newArr[i] = arr[i];
    }
    
    // 3. Delete old array
    delete[] arr;
    
    // 4. Update references
    arr = newArr;
    oldSize = newSize;
}

// Usage:
int main() {
    int size = 5;
    int* arr = new int[size];
    
    // Resize to 10 elements
    resizeArray(arr, size, 10);
    
    delete[] arr;
    return 0;
}
