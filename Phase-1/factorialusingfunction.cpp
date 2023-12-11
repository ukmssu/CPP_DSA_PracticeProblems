//Factorial of a number n
/*The code you provided for calculating the factorial of a number using a loop is not capable of handling 
very large factorials, such as 17!.

The reason is that the int data type has a limited range, and factorials of large numbers can quickly 
exceed the maximum value that can be stored in an int. As a result, the factorial calculation may overflow 
and produce incorrect results.

To calculate factorials of larger numbers accurately, you can use a larger integer data type such 
as long long or unsigned long long, which have a wider range. Additionally, you can also use a library like 
the GNU Multiple Precision Arithmetic Library (GMP) that provides arbitrary-precision arithmetic for handling 
very large numbers.*/

#include<iostream>
using namespace std;
int fact(int n)
{
    if(n<0)
    {
        cout<<"Please enter positive integer."<<endl;
        return -1;
    }
    else 
    {
        int factorial = 1; 
        for(int i=1; i<=n; i++)
        {
            factorial *= i;
        }
        return factorial;
    }
}
int main()
{
    int n;
    cout<<"Enter positive number: ";
    cin>>n;
    int factorial = fact(n);
    if(factorial!=-1)
    {
        cout<<"Factorial of "<<n<<" is: "<<factorial<<endl;
    }
    
    return 0;
}