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
    //sorting array in ascending order using bubble sort method
    int counter = 1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(array[i]>array[i+1]){
                int temp = array[i+1];
                array[i+1] = array[i];
                array[i] = temp;
            }
        }
        counter++; //to move in next interation

    }
    cout<<"Sorted array in ascending order: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}