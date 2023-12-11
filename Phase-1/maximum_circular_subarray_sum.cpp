//Maximum Circular Subarray Sum
//Max subarray sum = Total sum of array - Sum of noncontributing array
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int kadane(int arr[], int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        if(currSum<0){
            currSum =0;
        }
        maxSum = max(maxSum,currSum);
    }
    return maxSum;
}


int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //maximum circular subarray sum
    int wrapsum;
    int nonwrapsum;

    //calculation non-wrapsum
    nonwrapsum = kadane(arr,n);

    //calculation wrapsum 
    //max subarray sum = total sum of array - sum of noncontributing array
    int totalSum = 0;
    for(int i=0;i<n;i++){
        totalSum = totalSum + arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalSum - (-kadane(arr,n));
    cout<<"Maximum Circular Subarray Sum = "<<max(wrapsum,nonwrapsum)<<endl;

    return 0;
}