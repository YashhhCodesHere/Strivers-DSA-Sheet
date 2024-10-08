#include <iostream>
#include <climits>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter the '" << i << "'th elements of the array: ";
        cin >> arr[i];
    }

    int maxElement = INT_MIN;
    int minElement = INT_MAX;
    

    for (int i = 0; i < SIZE; i++) {
        maxElement = max(maxElement,arr[i]);
        minElement = min(minElement,arr[i]);
    }

    cout << "Maximum element: " << maxElement << endl; // This line shows the maximum element of the array
    cout << "Minimum element: " << minElement << endl; // This line shows the minimum element of the array

    return 0;
}
