#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        
        for(int space=1; space<=2*n-2*i;space++)
        {
            cout<<"  ";
        }

        for(int k=1; k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

        for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        
        for(int space=1; space<=2*n-2*i;space++)
        {
            cout<<"  ";
        }

        for(int k=1; k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}