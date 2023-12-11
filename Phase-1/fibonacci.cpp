//Fibonacci sequence
#include<iostream>
using namespace std;
void GenerateFibonacci(int n)
{
    int t1 = 0; //first term
    int t2 = 1; //second term
    cout<<"Fibonacci Sequence ("<<n<<" terms): ";
    for(int i=1; i<=n; i++)
    {
        cout<<t1<<" "; //firstly it will print t1
        int tnext = t1+t2;
        t1 = t2; //puting second term into first term so that in next iteration second term will be printing
        t2 = tnext;
    }
    cout<<endl;
    return;
}
int main()
{
    int n; //number of terms in fibonacci sequence
    cout<<"Enter the number of terms to generate in fibonacci sequence: ";
    cin>>n;
    GenerateFibonacci(n);
    return 0;
}