#include<iostream>
using namespace std;
int main(){
    cout<<"Size of int: "<<sizeof(int)<<endl;
    cout<<"Size of short int: "<<sizeof(short int)<<endl;
    cout<<"Size of long int: "<<sizeof(long int)<<endl;
    cout<<"Size of long long int: "<<sizeof(long long int)<<endl;
    cout<<"Size of signed int: "<<sizeof(signed int)<<endl;  //signed stores both positive and negative values
    cout<<"Size of unsigned int: "<<sizeof(unsigned int)<<endl;  //unsigned stores only positive values

    // print value of x in different data type modifiers
    long long x;

    cout << "Enter a number: ";
    cin >> x;
    short int s = x;
    int i = x;
    long int l = x;
    long long int ll = x;
    signed int si = x;
    unsigned int ui = x;
    
    cout << "\nValue in different data types:\n";
    cout << "short int      : " << s << endl;
    cout << "int            : " << i << endl;
    cout << "long int       : " << l << endl;
    cout << "long long int  : " << ll << endl;
    cout << "signed int     : " << si << endl;
    cout << "unsigned int   : " << ui << endl;
    return 0;
}