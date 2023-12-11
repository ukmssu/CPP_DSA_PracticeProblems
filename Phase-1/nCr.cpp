//calculate nCr
#include<iostream>
using namespace std;

long long fact(int n)
{
    if(n<0)
    {
        throw "Please enter positive number";
        //return -1;
        /*To rectify the issue where the program displays the invalid input message but still return -1 as the 
        result, you can use an alternative approach. Instead of returning -1 to indicate an invalid input, you
        can throw an exception to handle such cases. this way, the program will stop executing furnther and the
        error message will be displayed without returning a result*/
    }
    else{
        long long factorial = 1;
        for(int i = 2; i<=n; i++)
        {
            factorial *=i;
        }
        return factorial;
    }
}

long long nCr(int n, int r)
{
    if(r>n)
    {
        throw "Invalid input, r should be less than or equal to n.";
        //return -1;
    }
    else{
        long long numerator = fact(n);
        long long denominator = fact(r)*fact(n-r);
        long long comb = numerator/denominator;
        return comb;
    }
}

int main (){
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the vaue of r: ";
    cin>>r;
    /*exception of type 'const char*' are thrown when an invalid input is encountered. In the 'main' 
    function, a 'try' block is used to wrap the code that may throw exceptions. if an exception is thrown, 
    it is caught by the corresponding 'catch' block, and the error massage is displayed.*/
    try{
        long long combination = nCr(n,r);
        cout<<"nCr= "<<combination<<endl;
    }
    catch(const char*error){
        cout<<"Error: "<<error<<endl;
    }
        return 0;

}