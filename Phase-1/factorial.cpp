//Write a program to find the factorial of a given number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a positive number: ";
    cin>>n;
    // int product = 1;
    // int i;
    // for(i=2;i<=n;i++)
    // {
    //    product = product*i;
    // }
    // cout<<product<<endl;
    if(n<0)
    {
        cout<<"Factoria of negative number is not-defined."<<endl;
    }
    else
    {
        int factorial = 1;
        for(int i = 2; i<=n; i++)
        {
            factorial *=  i;
        }
        cout<<"Factorial of given positive number "<<n<<" is: "<<factorial<<endl;
    }
    return 0;
}