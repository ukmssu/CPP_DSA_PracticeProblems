//Print all possible subarray of the given unsorted array.
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter element in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Selecting first element and last element and writing all the element in between
    cout<<"Possible subarray is below:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}