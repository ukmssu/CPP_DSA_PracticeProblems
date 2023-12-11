#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int array[n];
    cout<<"Enter elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    //sorting in decending order using selection sort method
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]<array[j]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }

        }
    }
    cout<<"Sorted array in decending order: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}