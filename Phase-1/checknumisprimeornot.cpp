#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Given number non-prime"<<endl;
            break;
        }
    }
    if(i==n)
    {
    cout<<"Given number is prime"<<endl;
    }
    return 0;
}