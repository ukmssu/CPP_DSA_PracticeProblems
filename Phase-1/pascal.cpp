#include<iostream>
using namespace std;

long long fact(int n)
{
    long long factorial = 1;
    for(int i = 2; i<=n; i++){
        factorial *=i;
    }
    return factorial;
}

int main()
{
    int numRows;
    cout<<"Enter the number of rows for Pascal's Triangle: ";
    cin>>numRows;

    for(int i = 0; i<numRows; i++){
        for(int j =0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}