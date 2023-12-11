#include<iostream>
using namespace std;
int linearsearch(int n,int array[],int key){
    for(int i=0;i<n;i++){
        if(array[i]==key){
            return i; //return the index if key is found
        }
    }
    //if we reach this point, the key was not found in the array
    cout<<"Error: Key not found in array."<<endl;
    exit(1); //terminate the program
}
int main(){
    int n;
    cout<<"Please enter array's size: ";
    cin>>n;
    int array[n];
    cout<<"Please enter "<<n<<" elements in your array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cout<<"Enter search key: ";
    cin>>key;
    int result = linearsearch(n,array,key);
    if (result != -1){
        cout<<"Search key matched with index "<<linearsearch(n,array,key)<<" in given array"<<endl;
    }
    
    return 0;
}