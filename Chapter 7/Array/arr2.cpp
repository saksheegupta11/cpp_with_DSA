// Find smallest and largest element in an array

#include<iostream>
using namespace std;

int main() {
    int arr[10];
    int smallest, largest;
    /*
            int smallest = INT_MAX;
            int largest = INT_MIN;
        */

    cout << "Enter 10 elements of the array:\n";

    // Input + Find smallest and largest
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];

        /*
            smallest = min(arr[i], smallest);   // uses smallest = INT_MAX
            largest = max(arr[i], largest);   // uses largest = INT_MIN
        */

        if(i == 0) {
            smallest = largest = arr[i];
        }
        else {
            if(arr[i] < smallest)
                smallest = arr[i];

            if(arr[i] > largest)
                largest = arr[i];
        }
    }

    cout << "\nArray elements are: ";
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << ", ";
    }

    cout << "\nSmallest element = " << smallest;
    cout << "\nLargest element = " << largest;

    return 0;
}