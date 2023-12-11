#include <iostream>
using namespace std;
int sum(int n)
{
    if(n<=0)
    {
        throw -1; // Throw a negative integer to represent the error for negative input
    }
    else
    {
        int summation = 0;
            for(int i = 1; i<=n; i++)
            {
              summation += i;  
            }
            //cout<<endl;
            return summation;
    }
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    try
    {
        /*In this corrected code, we have moved the calculation of the sum to a separate variable result. 
        This way, the cout statement for displaying the result will only execute when there is no exception. 
        If a negative input is encountered, the exception will be caught, and the error message will be 
        displayed without showing the result line.*/
        int result = sum(n);
        cout<<"Sum of first "<<n<<" natural numbers is: "<<result<<endl;
    }
    catch(int error)
    {
        cout<<"Error: Please enter positive number!"<<endl;
        //return 1; //return from main to terminate the program
    }  
    return 0;
}
