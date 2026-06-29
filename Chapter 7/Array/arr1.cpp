#include<iostream>
using namespace std;
int main(){
    int marks[5];
    cout<<"Enter marks of 5 subjects: ";
    for(int i=0; i<5; i++){
        cin>>marks[i];
    }
    cout<<"Marks of 5 subjects are: \n";
    for(int i=0; i<5; i++){
        cout<<i+1<<" : "<<marks[i]<<"\n";
    }
    return 0;
}