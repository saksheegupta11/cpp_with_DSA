// Print table of 1 to n numbers
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1; i<=10; i++){
        for(j=1; j<=n; j++){
            cout<<setw(5)<<i*j;
        }
        cout<<"\n";
    }
    return 0;
}
