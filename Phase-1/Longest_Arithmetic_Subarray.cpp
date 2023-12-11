//Longest Arithematic Subarray

/////////////////////////////// PROBLEM ////////////////////////////////////////////////
/*
An arithmetic array is an array that contains at least two integers and the differences between 
consecutive integers are equal. For example, [9,10], [3,3,3], and [9,7,5,3] are arithmetic array, 
while [1,3,3,7], [2,1,2], and [1,2,4] are not arithmetic arrays.

Sarasvati has an array of N non-negative integers. The i-th integer of the array is A_i. She 
wants to choose a contiguous arithmetic subarray from her array that has the maximum length. 
Please help her to determine the length of the longest contiguous arithmtic subarray.
*/

////////////////////////// INPUT ///////////////////////////////////////////////////////
/*
The first line of the input gives the number of test cases, T. T test cases follow. Each test 
case begins with a line containing the integer N. The second line contains N integers. The 
i-th integer is A_i.
*/

///////////////////////////// OUTPUT //////////////////////////////////////////////////
/*
For each test case, output one line containing Case #x:y, where x is the test case number 
(starting from 1) and y is the length of the longest contiguous arithmetic subarray.
*/

////////////////////////////// CONSTRAINTS ////////////////////////////////////////////
/*
Time limit: 20 seconds per test set.
Memory limit: 1GB.
1 <= T <= 100.
0 <= A_i <= 10^9.

Test Set 1
2 <= N <= 2000.

Test Set 2
2 <= N <= 2x2^5 for at most 10 test cases.

for the remaining cases, 2 <= N <= 2000.

Note:
1 Sec = 10^8 operation (approax)
*/

//////////////////////// INTUTION and APPROACH /////////////////////////////////////
/*
° Loop over the array and find the answer.

Maintain the following variables:
   1. Previous Common Difference (Pd)
   2. Current Arithmetic Subarray length (curr)
   3. Max arithmetic subarray length (ans)
*/

//////////////////////////// CASES ////////////////////////////////////////////////////
/*
Case 1:
Pd == A[i] - A[i-1]
    1. Current ans increases by 1.
    2. ans = max(ans,curr).

Case 2:
Pd != A[i] - A[i-1]
    1. Update current ans to 2.
*/
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int array[n];
    cout<<"Enter elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    } 

    int MaxArithSubarrayLen = 2; //Maximum Arithmetic Subarray Length will be at least 2. As there will be minimum 2 elements in subarry
    int PrevCommonDiff = array[1]-array[0]; //previous common difference
    int CurrArithSubarrayLen = 2; //Current Arithmetic Subarray Lenght
    int Pointer = 2; // Already calculated for array[0] and array[1]

    while(Pointer<n){
        if(PrevCommonDiff == array[Pointer]-array[Pointer-1]){
            CurrArithSubarrayLen++;
        }
        else{
            PrevCommonDiff = array[Pointer]-array[Pointer-1];
            CurrArithSubarrayLen = 2;
        }
        MaxArithSubarrayLen = max(MaxArithSubarrayLen,CurrArithSubarrayLen);
        Pointer++;
    }
    cout<<"Longest Arithmetic Subarray Length: "<<MaxArithSubarrayLen<<endl;
    return 0;
}