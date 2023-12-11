#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int array[n];
    cout<<"Enter array's elements: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"The array is: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}