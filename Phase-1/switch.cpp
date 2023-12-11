#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Input a character: ";
    cin>>button;
    // if(button=='a')
    // {
    //     cout<<"Hello"<<endl;
    // }
    // else if(button=='b')
    // {
    //     cout<<"Namaste"<<endl;
    // }
    // else if(button == 'c')
    // {
    //     cout<<"Vanakkam"<<endl;
    // }
    // else if(button == 'd')
    // {
    //     cout<<"annyeonghaseyo"<<endl;
    // }
    // else
    // {
    //     cout<<"I am still learning more!"<<endl;
    // }
    switch(button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Namaste"<<endl;
        break;
    case 'c':
        cout<<"Vanakkam"<<endl;
        break;
    case 'd':
        cout<<"Annyeonghaseyo"<<endl;
        break;
    default:
        cout<<"I am still learning more!"<<endl;
        break;
    }
    return 0;
}