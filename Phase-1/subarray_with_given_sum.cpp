/*
//Subarray with Given Sum
//////////////////////////////// PROBLEM ///////////////////////////////////////////////
Given an unsorted array A of size N of non-negative integers, find a continuous subarray which 
adds to a given number S.
*/
#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int main(){
    int n,s;
    cout<<"Enter size of an array: ";
    cin>>n;
    cout<<"Enter given sum: ";
    cin>>s;
    int a[n];
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //using two pointer method
    int i=0, j=0, st=-1, en=-1, sum=0;
    while(j<n && sum+a[j] <= s){
        sum += a[j];
        j++;
    }
    if(sum == s){
        cout<<"First index and last index of subarray is: "<<i+1<<" "<<j+1<<endl;
        return 0; //If this condition satisfy, terminate code from here.
    }

    while(j<n){
        sum += a[j];
        while(sum>s){
            sum -= a[i];
            i++;
        }
        if(sum ==s){
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout<<"First index and last index of subarray is: "<<st<<" "<<en<<endl;

    return 0;
}