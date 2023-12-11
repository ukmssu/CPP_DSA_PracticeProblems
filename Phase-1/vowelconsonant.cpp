//Write a program to find whether a given character is a vowel or a consonant.
//please enter small letter only.
#include<iostream>
#include<cctype> //for tolower function && isalpha function
using namespace std;
int main()
{
    char origcharacter;
    cout<<"Enter a character: ";
    cin>>origcharacter;

    char character = tolower(origcharacter); //convert the character to lowercase for easier comparison
    if(!isalpha(character))
    {
        cout<<"Invalid input. Please enter a letter."<<endl;
        return 0;
    }
    if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
    {
        cout<<"Given character '"<<origcharacter<<"' is a "<<"vowel"<<endl;
    }
    else 
    {
        cout<<"Given character '"<<origcharacter<<"' is a "<<"consonant"<<endl;
    }
    return 0;
}