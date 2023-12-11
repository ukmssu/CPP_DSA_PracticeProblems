//Write a program to display all factors of a number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter a positive number: ";
    cin>>n;
    cout<<"Factors of given positive number"<<n<<" is: ";
    int i;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}