#include<iostream>
#include<cmath>
using namespace std;
int octalTodecimal(int octal){
    int decimal = 0, i = 0, remainder;
    while(octal !=0){
        remainder = octal%10;
        octal /= 10;
        decimal += remainder*pow(8,i);
        ++i;
    }
    return decimal;
}
/*int octalTodecimal(int octal): This is the function declaration for octalTodecimal. It 
specifies that the fuction takes one argument, octal, which is of type int. The function is 
expected to return an integer (int)*/
int main(){
    int octal;
    cout<<"Please Enter a Octal Number: ";
    cin>>octal;
    cout<<"Decimal conversion of given Octal number '"<<octal<<"' is: "<<octalTodecimal(octal)<<endl;
    return 0;
}