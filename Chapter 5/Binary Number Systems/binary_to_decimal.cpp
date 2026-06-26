#include<iostream>
using namespace std;

int binaryToDecimal(int binaryNum){
    int power=1, answer=0;
    while(binaryNum>0){
        int rem = binaryNum%10;
        answer = (rem*power)+answer;
        binaryNum = binaryNum/10;
        power = power*2;
    }
    return answer;
}

int main(){
    int binaryNum;
    cout<<"Enter a binary number: ";
    cin>>binaryNum;
    cout<<"Decimal equivalent: "<<binaryToDecimal(binaryNum)<<endl;
    return 0;
}