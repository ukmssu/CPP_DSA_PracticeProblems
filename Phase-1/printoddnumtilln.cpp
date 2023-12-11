#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a num: ";
    cin>>num;
    for(int n=1;n<=num;n++)
    {
        if(n%2==0)
        {
            continue;
        }
        cout<<n<<endl;
    }
    return 0;
}