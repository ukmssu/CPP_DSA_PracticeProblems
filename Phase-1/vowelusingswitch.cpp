#include<iostream>
using namespace std;
int main()
{
    char alp;
    cout<<"Please enter an alphabate: ";
    cin>>alp;
    switch(alp)
    {
    case 'a':
        cout<<"It's a vowel"<<endl;
        break;
    case 'e':
        cout<<"It's a vowel"<<endl;
        break;
    case 'i':
        cout<<"It's a vowel"<<endl;
        break;
    case 'o':
        cout<<"It's a vowel"<<endl;
        break;
    case 'u':
        cout<<"It's a vowel"<<endl;
        break;
    default:
        cout<<"It's a constant"<<endl;
        break;
    }
    return 0;
}