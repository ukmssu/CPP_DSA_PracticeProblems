#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int array[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int maxtilli = INT_MIN;
    cout<<"Max till i: ";
    for(int i=0;i<n;i++){
        maxtilli = max(maxtilli,array[i]);
        cout<<maxtilli<<" ";
    }
    cout<<endl;
    return 0;
}