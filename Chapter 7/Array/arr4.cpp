// Linear Search in an array
#include<iostream>
using namespace std;

int searchTarget(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            cout<<target<<" target found at index: "<<i<<endl;
            return i;
        }
    }
    cout<<target<<" not found in the array."<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the value for index "<<i<<": ";
        cin>>arr[i];
    }
    // int arr[] = {1,2,3,4,5,6,7,8,9,10};
    // int n = sizeof(arr)/sizeof(arr[0]);   // No. of elements in the array
    // cout<<sizeof(arr)<<endl;    // complete size of array in bytes
    int target;
    cout<<"Enter the value to search: ";
    cin>>target;
    searchTarget(arr, n, target);
    return 0;
}