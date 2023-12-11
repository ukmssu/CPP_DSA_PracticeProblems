#include<iostream>
#include<cmath> //for power function to calculate the power of any digit
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    int sum = 0;
    int originalnum = n;
    while(n>0)
    {
        int lastdigit = n%10;
        sum += pow(lastdigit,3); //for three digit number
        n = n/10;
    }
    if(sum == originalnum)
    {
        cout<<"Given number is an Armstrong number."<<endl;
    }
    else
    {
        cout<<"Given number is not an Armstrong number."<<endl;
    }
    return 0;
      
}