//If number start with 0, this code don't reverse 0
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter number: ";
    cin>>n;
    int reverse = 0;
    while(n>0)
    {
        int lastdigit = n%10; //this will give last digit, as reminder gives last digit
        reverse = reverse*10 + lastdigit;
        n = n/10; // this will give number excluding last digit that is quotient
    }
    cout<<"Reverse number is: "<<reverse<<endl;

    return 0;
}