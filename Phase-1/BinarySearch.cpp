//For increasing order sorted sequence only
#include<iostream>
using namespace std;
int binarysearch(int n, int array[], int key){
    int s = 0;
    int e = n;
    while(s<=e){
        int mid = (s+e)/2;

        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }

    }
    cout<<"Error: Search key not found."<<endl;
    exit(1);

}
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int array[n];
    cout<<"Enter array's elements in increasing order: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cout<<"Enter search key: ";
    cin>>key;
    int result = binarysearch(n,array,key);
    if(result != -1){
        cout<<"Search key found at index: "<<binarysearch(n,array,key)<<endl; 
    }

    return 0;
}