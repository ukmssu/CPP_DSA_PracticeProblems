//given an array a[] of size n. output sum of each subarray of the given array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int array[n];
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){
            sum += array[j];
            cout<<"Sum of subarray ["<<i<<".."<<j<<"] is: "<<sum<<endl;
        }
    }
    return 0;
}