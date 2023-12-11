//Maximum Subarrya Sum
//Find the subarray in an array which has maximum sum


// //////////// BRUT FORCE APPROACH [O(n^3)] //////////////////////
// //While finding every possible subarrys of an array, add all elements of that subarry and check for maximum
// #include<iostream>
// #include<cmath>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of an array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter element in array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     //Selecting first element and last element and writing all the element in between
//     //cout<<"Possible subarray is below:"<<endl;
//     int maxSum = INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum = 0;
//             for(int k=i;k<=j;k++){
//                 //cout<<arr[k]<<" ";
//                 sum += arr[k];
//             }
//             //cout<<endl;
//             maxSum = max(maxSum,sum);
//         }
//     }
//     cout<<"Maximum Subarray Sum = "<<maxSum<<endl;
//     return 0;
// }
// //Note: Time complexity of this code is O(n^3), which is very bad.


// ////////////////// CUMULATIVE SUM APPROACH [O(n^2)] /////////////////////////////
// #include<iostream>
// #include<cmath>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of an array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements in array: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     //comulative sum approach
//     int currSum[n+1];
//     currSum[0] = 0;
//     for(int i=1; i<=n; i++){
//         currSum[i] = currSum[i-1] + arr[i-1];
//     }

//     int maxSum = INT_MIN;
//     for(int i=1; i<=n; i++){
//         int sum = 0;
//         for(int j=0; j<i; j++){
//             sum = currSum[i] - currSum[j];
//             maxSum = max(sum,maxSum);
//         }
//     }
//     cout<<"Maximum Subarray Sum = "<<maxSum<<endl;
//     return 0;
// } 


//////////////////////////// KADANE'S ALGORITHM [O(n)] ////////////////////////////////////////
/*
    →Doesn't handle negative numbers well: If an input array has only negative numbers, the algorith 
    will return the maximum negative number instead of 0.
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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Kadane's algorithm
    int currSum = 0;
    int maxSum = 0;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        if(currSum<0){
            currSum = 0;
        }
        maxSum = max(maxSum,currSum);
    }
    cout<<"Maximum Subarray Sum = "<<maxSum<<endl;
    return 0;
}