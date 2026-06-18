#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a = ";
    cin>>a;
    // Arithmetic Operator
    cout<<"\nEnter the value of b = "; 
    cin>>b;
    cout<<"\nArithmetic Operators";
    c=a+b;
    cout<<"\nSum = "<<c;
    c=a-b;
    cout<<"\nDifference = "<<c;
    c=a*b;
    cout<<"\nProduct = "<<c;
    c=a/b;
    cout<<"\nDivision = "<<c;
    c=a%b;
    cout<<"\nModulus = "<<c;

    // Relational Operator
    cout<<"\n\nRelational Operators";
    if(a==b){
        cout<<"\na is equal to b";
    }
    else if(a<b){
        cout<<"\na is less than b";
    }
    else if(a<=b){
        cout<<"\na is less than or equal to b";
    }
    else if(a>b){
        cout<<"\na is greater than b";
    }
    else if(a>=b){
        cout<<"\na is greater than or equal to b";
    }
    else{
        cout<<"\na is not equal to b";  
    }

    // Logical Operator
    cout<<"\n\nLogical Operators\n";
    if(a>0 && b>0){
        cout<<"a and b are positive numbers";
    }
    else if(a>0 && b<0){
        cout<<"\na is a positive number and b is a negative number";
    }
    else if(a<0 && b>0){
        cout<<"\na is a negative number and b is a positive number";
    }
    else if(a<0 && b<0){
        cout<<"\na and b are negative numbers";
    }

    // Unary Operator   
    cout<<"\n\nUnary Operators\n";
    cout<<"Value of a = "<<a<<endl;
    cout<<"Value of b = "<<b<<endl;
    b = a++; //post-increment
    cout<<"b after a++ = "<<b<<endl;
    cout<<"a after a++ = "<<a<<endl;
    b = ++a; //pre-increment
    cout<<"b after ++a = "<<b<<endl;
    cout<<"a after ++a = "<<a<<endl;
    b = a--; //post-decrement
    cout<<"b after a-- = "<<b<<endl;
    cout<<"a after a-- = "<<a<<endl;
    b = --a; //pre-decrement
    cout<<"b after --a = "<<b<<endl;
    cout<<"a after --a = "<<a<<endl;
    return 0;
}