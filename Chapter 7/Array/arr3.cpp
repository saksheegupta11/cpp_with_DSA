// Pass by Reference
#include<iostream>
using namespace std;

void changeArr(int arr[], int size){
    cout<<"After changing the array: ";
    for(int i=0; i<size; i++){
        arr[i] = arr[i] * 2;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"Before changing the array: ";
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    changeArr(arr, 10);
    cout<<"After calling the function, Original array becomes: ";
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}