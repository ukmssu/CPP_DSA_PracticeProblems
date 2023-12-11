#include<iostream>
#include<climits>
/*In C++, INT_MAX and INT_MIN are macros that represent the maximum and minimum values that 
an integer variable can hold. They are defined in the <climits> header*/
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int array[n];
    cout<<"Enter array's elements: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    for(int i=0;i<n;i++){
        maxNum = max(maxNum,array[i]);
        minNum = min(minNum,array[i]);
        // if(array[i]>maxNum){
        //     maxNum=array[i];
        // }
        // if(array[i]<minNum){
        //     minNum=array[i];
        // }
    }
    cout<<"Maximum num = "<<maxNum<<" and Minimum num = "<<minNum<<endl;
    return 0;
}