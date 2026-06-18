#include<iostream>
using namespace std;
int main(){
    int i=1,j,n,count;
    // Prime numbers between 1 to n
    cout<<"Enter a number: ";
    cin>>n;
    do{
        j=1;
        count=0;
        do{
            if(i%j == 0){
                count++;
            }
            j++;
        } while(j<=i);
        if(count <= 2){
            cout<<i<<" ";
        }
        i++;
    } while(i<=n);
    return 0;
}