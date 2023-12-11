#include<iostream>
using namespace std;
bool IsPythTri(int x, int y, int z)
{
    /*
    In C++, the return statement is used to exit from a function and optionally return a value to the 
    caller. The value that is returned by the function can be specified using the return keyword followed 
    by an expression. The result of the expression will be the value that the function returns.
    */
    return (x*x == y*y + z*z);

}
int main(){
    int a,b,c;
    cout<<"Please Enter three positive number seperated by space: ";
    cin>>a>>b>>c;
    
    if(IsPythTri(a,b,c)||IsPythTri(b,c,a)||IsPythTri(c,a,b)){
        cout<<"It's a Pythagorian Triplet"<<endl;
    }
    else{
        cout<<"It's not a Pyhthagorian Triplet"<<endl;
    }

    return 0;
}