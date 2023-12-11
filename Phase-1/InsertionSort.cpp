#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int array[n];
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    
    for(int i=1;i<n;i++){
        int current = array[i];
        int j = i-1;
        while(array[j]>current && j>=0){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = current;
        
    }
    cout<<"Sorted array in ascending order: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}