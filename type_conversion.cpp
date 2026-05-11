// Type Conversion is an implicit conversion of small data type to big data type.

#include<iostream>
using namespace std;
int main(){
    char grade = 'A';
    int char_value = grade;
    cout<<char_value<<endl;

    float PI = 3.14;
    double float_value = PI;
    cout<<float_value<<endl;
    return 0;
}