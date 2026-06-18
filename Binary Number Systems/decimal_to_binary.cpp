#include<iostream>
using namespace std;

int decToBinary(int decNum){
    int answer=0, power=1;

    while(decNum>0){
        int rem = decNum%2;
        decNum = decNum/2;
        answer = (rem*power) + answer;
        power = power*10;
    }
    return answer;
}

int main(){
    int decNum;
    cout<<"Enter a decimal number: ";
    cin>>decNum;
    int binaryNum = decToBinary(decNum);
    cout<<"Binary equivalent: "<<binaryNum<<endl;
    return 0;
}