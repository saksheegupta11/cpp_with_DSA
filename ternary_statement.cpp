#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<(n%2==0? "even number" : "odd number");
    return 0;
}