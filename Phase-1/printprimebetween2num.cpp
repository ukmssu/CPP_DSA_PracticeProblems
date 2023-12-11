#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int num=a;num<b;num++)
    {
        int i;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                //continue; //skip to the next iteration of the loop
                break; //terminate the loop
            }
        }
        if(i==num)
        {
            cout<<num<<endl;
        }
    }
    return 0;
}