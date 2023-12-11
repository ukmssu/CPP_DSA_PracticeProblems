//At this moment this code does not able to recognize that given input from the user is binary or not.
//Include the syntax which will able to differenciate that given input is binary or not. (like binary number only contains 1 and 0)
#include<iostream>
#include<cmath>
using namespace std;
/*The using namespace std statement in C++ means that in the scope it is present, all the 
things under the std namespace are available without having to prefix std:: before each of 
them.*/
/*These are preprocessor directives that include the iostream and cmath libraries.
The iostream library allows for input/output operations, and cmath library 
provides mathematical functions*/
int binaryTodecimal(long long binary){ //This is the function declaration for binaryTodecimal. It takes a long long integer as an argument, which represents the binary num to be converted.
    int decimal = 0, i = 0, remainder;
    //These are variable declarations. decimal will hold the decimal equivalent of the binary num, i is a counter for the current digit being proceed, and remainder will hold the remainder of the division operation
    while(binary != 0){  //this is while loop that continues as long as the binary num is not zero
        remainder = binary%10; //this line calculates the remainder of the binary number divided by 10. this effectively gives the last digit of the binary num.
        binary /= 10; //this line divides the binary num by 10, effectively removing the last digit.
        decimal += remainder*pow(2,i);
        ++i;
    }
    return decimal; //this line return the decimal equivalent of the binary number
}
int main(){                 //This is the main function where the program start execution.
    long long binary;  //declare a variable binary to hold the binary num i/p by the user
    cout<<"Enter a binary number: "; //Prints a message to the console asking the user to enter a binary number
    cin>>binary; //takes the binary num i/p's from the user
    cout<<"Decimal equivalent: "<<binaryTodecimal(binary)<<endl; // prints the decimal equivalent of the binary number to the console
    return 0;
}
/*Return 0; :  This line signifies that the program has executed successfully. It's a 
common practice to return 0 from the main() function to indicate successful execution of the 
program*/