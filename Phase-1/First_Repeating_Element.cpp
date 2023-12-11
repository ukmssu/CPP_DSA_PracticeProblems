//First index of first repeating element
/*
/////////////////////////////////// PROBLEM ///////////////////////////////////////////
Given an array arr[] of size N. The task is to find the first repeating element in the array 
of integers, i.e., an element that occurs more than once and whose index of first occurence is 
smallest.
/////////////////////////////////// BASE IDEA ////////////////////////////////////////
To check if a element is repeating, we maintain an array idx[], which stores the first occurance 
(index) of a particular element a[i].
    →Initialise the idx[] with -1, and minidx with INT_MAX.
    →Keep updating idx[], while traversing the given array.
*/
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int array[n];
    cout<<"Enter elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    //Initialise the idx[] with -1.
    const int N = 1e6+2; //'const' means value of variable can't be changed after it's initialized
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i] = -1;
    }

    //Initialise minidx with INT_MAX
    int minidx = INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[array[i]] != -1){
            minidx = min(minidx, idx[array[i]]);
        }
        else {
            idx[array[i]] = i;
        }
    }

    if(minidx == INT_MAX){
        cout<<"No repeating element found in the array"<<endl;
    }
    else{
        cout<<"First repeating element index is: "<<minidx+1<<endl;
    }

    return 0;
}