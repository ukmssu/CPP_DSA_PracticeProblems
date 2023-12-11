#include<iostream>
#include<cmath>
using namespace std;
int decimalTooctal(int decimal){
    int octal = 0;
    int base = 1;
//Selecting highest power of 8 which is less than or equal to decimal number
    while(base <= decimal)
        base *= 8;
    base /= 8;

    while(base > 0){
        int lastDigit = decimal/base;
        decimal -= lastDigit*base;
        base /= 8;
        octal = octal*10+lastDigit;
    }
    return octal;
}
int main(){
    int decimal;
    cout<<"Enter a Decimal Number: ";
    cin>>decimal;
    cout<<"Octal equivalent: "<<decimalTooctal(decimal)<<endl;
    return 0;
}