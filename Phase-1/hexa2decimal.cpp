//#include<bits/stdc++.h>
/*The line '#include<bits/stdc++.h>' is a directive that includes a header file in c++. The 
'bits/stdc++.h' is a header file that includes several standard library header files. 
This is a convenience header file used in competitive programming to reduce the time and 
effort needed to include multiple header files individually*/
/*However, it's important to note that 'bits/stdc++.h' is not part of the C++ standard library. 
It is supported by some compiler (like GNU GCC), but not all, so its use is not portable and is 
generally discouraged in production code. It's better to include only specific header files that 
you need for your program.*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int hexa2decimal(string hexa){
    int decimal = 0, x = 1;
    int s = hexa.size(); //.size() function is defined in string by default.
    /*in this line of code, 'int s = hexa.size()'; a variable 's' of type 'int' is being declared 
    and initialized. The value assigned to 's' is the size of the string 'hexa'*/
    /*The 'size()' function is a standard library function in C++ that returns the number of 
    characters in a string. So, 'hexa.size()' returns the number of characters in the strng 'hexa'*/
    /*Therefore, after this line of code is executed, 's' will hold the number of characters in 
    'hexa'. For example, if 'hexa' is 'ABC123', then 's' will be '6'.*/
    for(int j=s-1; j>=0;j--){
        /*In computing and digital systems, strings are sequences of characters and are 
        typically read from left to right, starting with the most significant character. This 
        is similar to how we read text in many languages, including English. So, when we say a 
        string is processed from the 'most significant bit (MSB)' to the "least significant bit (LSB)" 
        we mean it's processed from the first character (at the left) to the right character (at the right).*/
        if(hexa[j]>='0' && hexa[j]<='9'){
            decimal = decimal + x*(hexa[j]-'0');
            //The expression 'hexa[j]-0' gives the integer value of the digit character.
            /*The ASCII vlaue of '0' is 48, so subtracting 48 from the ASCII value of a digit 
            gives the decimal value of the digit.*/
        }
        else if(hexa[j]>='A' && hexa[j]<='F'){
            decimal = decimal + x*(hexa[j]-'A'+10);
            /*The expression 'hexa[j]-'A'+10' gives the decimal value of the letter character. 
            The ASCII value of A is 65 from the ASCII value of a letter gives a value of 0 
            for A, 1 for B, and so on. Adding 10 to this value gives the decimal value of 
            hexadecimal digit (A-F represent 10-15 in hexadecimal)*/
        }
        x *= 16;
    }
    return decimal;
}
int main(){
    string hexa;
    cout<<"Please Enter a Hexadecimal number: ";
    cin>>hexa;
    cout<<"Binary equivalent: "<<hexa2decimal(hexa)<<endl;
    return 0;
}
/*The 'main()' function is the entry point of a C++ program. When the program is run, execution 
starts with the 'main()' function. The 'int' before 'main()' signifies that the 'main()' function 
should return an integer value*/

/*This return value is used by the operating system to determine whether the program ran 
successfully or not. A return value of 0 typically indicates that the program has executed 
successfully. Other values may indicate various error condition*/