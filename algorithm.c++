#include <iostream>
#include <algorithm> // for std::find

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    // Use std::find to find the first occurrence of target in the array
    int* position = std::find(arr, arr + size, target);

    // Check if target was found
    if (position != arr + size) {
        // Calculate the index of the found element
        int index = position - arr;
        std::cout << "Element " << target << " found at position " << index << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array" << std::endl;
    }

    return 0;
}
