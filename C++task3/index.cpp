#include <iostream>
#include <climits>

int findSecondLargest(int arr[], int size) {
    int largest = INT_MIN;          // Initialize largest as smallest possible value
    int secondLargest = INT_MIN;    // Initialize second largest as smallest possible value

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {10, 5, 8, 20, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);

    if (secondLargest != INT_MIN) {
        std::cout << "The second-largest element is: " << secondLargest << std::endl;
    } else {
        std::cout << "There is no second-largest element." << std::endl;
    }

    return 0;
}
