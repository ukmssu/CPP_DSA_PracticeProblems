#include<iostream>
using namespace std;

int main()
{
    for(int num=0; num<100 ;num++)
    {
        if(num%3==0) //% gives reminder
        {
            continue; //continue: skip to the next iteration of the loop 
        }
        cout<<num<<endl;
    }
    return 0;
}