#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    // Bitwise AND operator
    cout<<"The value of "<<a<<" & "<<b<<" is: "<<(a&b)<<endl;
    
    // Bitwise OR operator
    cout<<"The value of "<<a<<" | "<<b<<" is: "<<(a|b)<<endl;

    // Bitwise XOR operator
    cout<<"The value of "<<a<<" ^ "<<b<<" is: "<<(a^b)<<endl;
    
    // Bitwise LEFT SHIFT operator
    int n, i;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter the number of positions to left shift: ";
    cin>>i;
    cout<<"The value of "<<n<<" << "<<i<<" is: "<<(n<<i)<<endl;

    // Bitwise RIGHT SHIFT operator
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter the number of positions to right shift: ";
    cin>>i;
    cout<<"The value of "<<n<<" >> "<<i<<" is: "<<(n>>i)<<endl; 
    return 0;
}