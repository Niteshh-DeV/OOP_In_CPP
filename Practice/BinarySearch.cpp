#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Calculate mid

        
        if (arr[mid] == target)
            return mid;

        // If target is greater, ignore the left half
        if (arr[mid] < target)
            low = mid + 1;

        // If target is smaller, ignore the right half
        else
            high = mid - 1;
    }

    // Target is not present in the array
    return -1;
}

int main() {
    int n, target;

    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    
    int arr[n];
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    cout << "Enter the target element: ";
    cin >> target;

    int result = binarySearch(arr, n, target);

    
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}
