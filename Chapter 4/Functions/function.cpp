#include<iostream>
using namespace std;

// Sum of 1 to N numbers
int sumOfNumbers(int n){
    int i,sum=0;
    for(i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

// Factorial of a number
int factorial(int n){
    int i, fact=1;
    for(i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

// Sum of digits of a number
int sumOfDigits(int n){
    int rem, i, len, sum=0;
    len = to_string(n).length();
    for(i=0; i<len; i++){
        rem = n%10;
        sum = sum+rem;
        n = n/10;
    }
    return sum;
}

// Binary coefficient of n and r
int fact(int x){
    int fact=1, i;
    for(i=1; i<=x; i++){
        fact *= i;
    }
    return fact;
}
int binaryCoefficient(int n, int r){    //nCr = n!/(r!*(n-r)!)
    return fact(n)/(fact(r)*fact(n-r));
}

// Check if a number is prime or not
void prime(int n){
    if(n == 1){
        cout<<"1 ";
        return;
    }
    int i, count=0;
    for(i=2; i<=n/2; i++){
        if(n%i ==0){
            count++;
            break;
        }
    }
    if(count == 0){
        cout<<n<<" ";
    }
}

// Prime numbers between 1 and N
void primeSeries(int num){
    int i;
    for(i=1; i<=num; i++){
        prime(i);
    }
}

// Fibonacci series
int fibonacci(int n){
    int a=0, b=1, c, i;
    for(i=0; i<n; i++){
        cout<<a<<" ";
        c = a+b;
        a = b;
        b = c;
    }
}

int main(){
    int num, n,r;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The sum of numbers from 1 to "<<num<<" is: "<<sumOfNumbers(num)<<endl;
    cout<<"The factorial of "<<num<<" is: "<<factorial(num)<<endl;
    cout<<"The sum of digits of "<<num<<" is: "<<sumOfDigits(num)<<endl;
    cout<<"Enter n and r for binary coefficient: ";
    cin>>n>>r;
    cout<<"The binary coefficient of "<<n<<" and "<<r<<" is: "<<binaryCoefficient(n,r)<<endl;
    cout<<"Enter a number to check if it is prime or not: ";
    cin>>num;
    prime(num);
    cout<<"\nPrime numbers between 1 and "<<num<<" are: ";
    primeSeries(num);
    cout<<"\nEnter the number of terms for Fibonacci series: ";
    cin>>num;
    fibonacci(num);
    return 0;
}