//Try different way to program this code.
#include<iostream>
#include<cmath>
using namespace std;
int decimalTobinary(int decimal){
    int binary=0;
    int base=1;
    while (base <= decimal)
        base *= 2;       //single statement while loop
    base /= 2;

    while (base >0){
        int lastDigit = decimal/base;
        decimal -= lastDigit*base;
        base /= 2;
        binary = binary*10+lastDigit;
    }
    return binary;
}
int main(){
    int decimal;
    cout<<"Enter a Decimal Number: ";
    cin>>decimal;
    cout<<"Binary equivalent is: "<<decimalTobinary(decimal)<<endl;
    return 0;
}