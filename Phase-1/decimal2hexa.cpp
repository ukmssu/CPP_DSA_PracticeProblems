#include<iostream>
#include<string>
#include<cmath>
using namespace std;

string decimalTohexadecimal(int decimal){
    string hexa = "";    //declaring an empty string
    int base = 1;

    while(base <= decimal)
        base *= 16;
    base /= 16;

    while(base > 0){
        int lastDigit = decimal/base;
        decimal = decimal - lastDigit*base;
        base /= 16;
         if(lastDigit <= 9){
            hexa = hexa + to_string(lastDigit);   //To convert numerical values to string
         }
         else{
            char ch = 'A'+lastDigit-10;
            hexa.push_back(ch);
         }
    }
    return hexa;
}

int main(){
    int decimal;
    cout<<"Enter a decimal number: ";
    cin>>decimal;
    cout<<"Hexadecimal euivalent is: "<<decimalTohexadecimal(decimal)<<endl;
    return 0;
}
/*string hexa = ""; - This line of code declares a variable named 'hexa' of type 'std::string' 
(a string class from the Standard Template Library in C++), and initializes it to an empty 
string. This means that 'hexa' doesn't contain any characters just after this line of code 
is executed. you can later assign any string value to 'hexa' in you code. ex, 'hexa = "Hellow, World!";*/

/*In C++, 'std::to_string(lastDigit)' is a function that converts the 'lastDigit' variable to 
a string. Here, 'lastDigit' is assumed to be an integer or a floating-point number. The 'std:: 
to_string()' function is part of the C++ standard Library and can convert numerical values to 
string*/

/*'char ch = 'A'+lastDigit-10' : This line is converting a number into a hexadecimal character. 
If 'lastDigit' is between 10 and 15 (inclusive), it subtracts 10 from 'lastDigit' and adds the 
result to the ASCII value of 'A' and 'F', which represents the hexadecimal digits for 10 to 15.*/

/*'hexa.push_back(ch)' : This line is adding the character 'ch' to the end of the string 'hexa'. 
The 'push_back()' function is a member function of the 'std::string' class that adds a character 
to the end of the string*/