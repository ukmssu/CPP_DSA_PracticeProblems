//Print all prime number between two given number
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num)
{
    if(num<=1)
    {
        return false;
    }
    else
    {
        for(int i=2; i<=sqrt(num); i++)
        {
            if(num%i==0)
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    int n1,n2;
    cout<<"Enter starting number: ";
    cin>>n1;
    cout<<"Enter ending number: ";
    cin>>n2;
    cout<<"Prime number between "<<n1<<" and "<<n2<<" is: ";
    for(int i = n1; i<=n2; i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}