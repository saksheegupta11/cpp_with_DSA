#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // Number pattern in continuous form
    int i,j,n, num=1;
    cout<<"Enter the number of digits in a row: ";
    cin>>n;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout<<setw(3)<<num<<" ";
            num++;
        }
        cout<<"\n";
    }
    return 0;
}