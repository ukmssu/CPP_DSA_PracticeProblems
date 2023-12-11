//PAIR SUM PROBLEM
//Check if there exists two elements in an array such that their sum is equal to given k.


///////////////// BRUT FORCE APPROACH [O(n^2)] ///////////////////////////////////////////
// #include<iostream>
// #include<cmath>
// #include<climits>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter size of an array: ";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter elements in the array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int k;
//     cout<<"Enter desired sum value: ";
//     cin>>k;

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==k){
//                 cout<<"Sum of array's index "<<i<<" and index "<<j<<" is equal to desired sum "<<k<<endl;
//             }
//         }
//     }
//     return 0;
// }


//////////////////// OPTIMISED APPROACH [O(n)] /////////////////////////////////////////////
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter desired sum value: ";
    cin>>k;

    //sort array in increasing order
    //Insertion sort approach
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int j = i-1;
        while(arr[j]>curr && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
    cout<<"Sorted array in ascending order: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int low =0;
    int high = n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<"Sum of array's index "<<low<<" and index "<<high<<" is equal to desired sum "<<k<<endl;
            return 0;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }

    return 0;
}