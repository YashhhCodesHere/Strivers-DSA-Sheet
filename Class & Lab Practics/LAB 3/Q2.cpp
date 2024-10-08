#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target greater, ignore left half
        if (arr[mid] < target)
            left = mid + 1;

        // If target is smaller, ignore right half
        else
            right = mid - 1;
    }

    // Target is not present in array
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << endl;
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout<<endl;
    int target;
    cout << "Enter the element to search for: ";
    cin >> target;
    int result = binarySearch(arr, size, target);

    if (result != -1)
        cout << "Element is present at index " << result << endl;
    else
        cout << "Element is not present in array" << endl;

    return 0;
}