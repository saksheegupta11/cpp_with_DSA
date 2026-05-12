#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    // Print pattern of alphabets
    for(i=0; i<n; i++){
        char ch='A';
        for(j=0; j<n; j++){
            cout<<ch;
            ch++;
        }
        cout<<"\n";
    }
    return 0;
}