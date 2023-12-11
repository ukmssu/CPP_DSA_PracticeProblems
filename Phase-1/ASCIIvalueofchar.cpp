//Write a program to print the ASCII value of any given character.
#include<iostream>
using namespace std;
int main()
{
    char character;
    cout<<"Please enter the character: ";
    cin>>character;

    int ASCIIvalue = static_cast<int>(character);
    //int ASCIIvalue = int(character);
    cout<<"Tha ASCII value of given character "<<character<<" is "<<ASCIIvalue<<endl;
    return 0;
}