//Smallest Positive Missing Number
/*
You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.
*/

#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //Initialising a boolean check array of large size 1e6+2
    const int N = 1e6+2;
    bool check[N];
    for(int i=0;i<N;i++){
        check[i] = false;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            check[arr[i]] = true;
        }
    }
    int ans = -1; //defined a variable named ans
    for(int i=1;i<N;i++){
        if(check[i] == false){
            ans = i;
            break;
        }
    }

    cout<<"Smallest Positive Missing Number: "<<ans<<endl;
    return 0;
}