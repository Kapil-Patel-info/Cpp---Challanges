#include <iostream>
#include <algorithm> // For std::sort
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements

    // Sort the array
    std::sort(arr, arr + n);

    // Print the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    cout<<arr[1];

    return 0;
}