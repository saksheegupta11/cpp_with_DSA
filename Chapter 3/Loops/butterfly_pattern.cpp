#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    // top part
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout<<"*";
        }
        for(k = 1; k <= 2*(n-i); k++){
            cout<<" ";
        }
        for(j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    // bottom part
    for(i=n-1; i>=1; i--){
        for(j=i; j>=1; j--){
            cout<<"*";
        }
        for(k=1; k<=2*(n-i); k++){
            cout<<" ";
        }
        for(j=i; j>=1; j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}