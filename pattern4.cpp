#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i,j,n;
    char ch='a';
    cout<<"Enter the number of characters in a row: ";
    cin>>n;
    // Print pattern of alphabets in continuous form
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout<<setw(1)<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
    return 0;
}