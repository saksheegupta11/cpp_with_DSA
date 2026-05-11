#include<iostream>
using namespace std;
int main(){
    int i,n, fact=1, sum=0;
    // Multiplication table of a number
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1; i<=n; i++){
        cout<<n<<"*"<<i<<"="<<n*i<<"\n";
    }

    // Factorial of a number
    for(i=1; i<=n; i++){
       fact = fact*i;    
    }
    cout<<"Factorial of "<<n<<" is: "<<fact<<"\n";

    // Sum of n natural numbers
    for(i=1; i<=n; i++){
        sum += i;
    }
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum<<"\n";

    // Sum of odd numbers
    sum = 0;   
    for(i=1; i<=n; i++){
        if(i%2 != 0){
            sum += i;
        }
    }
    cout<<"Sum of odd numbers from 1 to "<<n<<" is: "<<sum<<"\n";

    // Sum of even numbers
    sum = 0;
    for(i=1; i<=n; i++){
        if(i%2 == 0){
            sum += i;
        }
    }
    cout<<"Sum of even numbers from 1 to "<<n<<" is: "<<sum<<"\n";

    return 0;
}