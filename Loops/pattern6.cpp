#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,num;
    // Number pattern in increasing order
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Number pattern\n";
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            cout<<i+1;
        }
        cout<<"\n";
    }

    // Alphabet pattern in increasing order
    char ch='A';
    cout<<"\nAlphabet pattern\n";
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            cout<<ch;
        }
        ch++;
        cout<<"\n";
    }

    // Number pattern
    cout<<"\nNumber pattern\n";
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            cout<<j+1;
        }
        cout<<"\n";
    }

    // Reverse number pattern
    cout<<"\nReverse number pattern\n";
    for(i=0; i<n; i++){
        for(j=i+1; j>0; j--){
            cout<<j;
        }
        cout<<"\n";
    }

    // Reverse alphabet pattern
    cout<<"\nReverse alphabet pattern\n";
    // char ch='A';
    for(i=0; i<n; i++){
        for(j=i+1; j>0; j--){
            cout<<ch;
        }
        cout<<"\n";
    }

    // Floyd's triangle
    cout<<"\nFloyd's triangle\n";
    num=1;
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            cout<<num;
            num++;
        }
        cout<<"\n";
    }

    // Alphabetical Floyd's triangle
    cout<<"\nAlphabetical Floyd's triangle\n";
    ch='a';
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            cout<<ch;
            ch++;
        }
        cout<<"\n";
    }

    // Inverted Triangle Pattern
    cout<<"\nInverted Triangle Pattern\n";
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            cout<<" ";
        }
        for(k=0; k<n-i; k++){
            cout<<i+1;
        }
        cout<<"\n";
    }

    // Pyramid Pattern
    cout<<"\nPyramid Pattern\n";
    for(i=0; i<n; i++){
        for(j=0; j<=n-i-1; j++){
            cout<<" ";
        }
        for(k=1; k<=i+1; k++){
            cout<<k;
        }
        for(k=i; k>0; k--){
            cout<<k;
            
        }
        cout<<"\n";
    }

    // Hollow Diamond Pattern
    cout<<"\nHollow Diamond Pattern\n";
    // top part
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(k=0; k<2*i-1; k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<"\n";
    }
    // bottom part
    for(i=0; i<n-1; i++){
        for(j=0; j<=i; j++){
            cout<<" ";
        }
        cout<<"*";
        if(i != n-2){
            for(j=0; j<2*(n-i)-5; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

