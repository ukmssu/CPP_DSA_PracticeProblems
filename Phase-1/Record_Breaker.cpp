//Record Breaker
/*
////////////////////////////////////// UNDERSTAND THE PROBLEM ////////////////////////////////
A day is considered a record-breaking day if it satisfies two conditions:
   → The number of visitors on the day is strictly larger than the number of visitor on each 
   of the previous day.
   → Either it is the last day, or the number of visitors on the day is strictly larger than 
   the number of visitors on the following day.

//////////////////////////////// IDENTIFY THE INPUT/OUTPUT /////////////////////////////////
→ The inout is an array of integers representing the number of visitors each day.
→ The output is the number of record-breaking days.

//////////////////////////////// FORMULATE A PLAN //////////////////////////////////////////
One approach is to iterate through the array and keep track of the maximum number of visitors 
seen so far. For each day, check if it is a record-breaking day by comparing the number of 
visitors on that day with the maximum number of visitors seen so far and the number of visitors 
on the next day.

/////////////////////////////// RECORD BREAKING DAY ////////////////////////////////////////
    → Strictly greater than all the previous values
    → Strictly greater than following value. 

///////////////////////////// BRUTE FORCE //////////////////////////////////////////////////
1. Iterate over all the elements and check if it is recorde breaking day or not.
Note: To check if a[i] is recorde breaking day, we have to iterate over a[0], a[1],.., a[i-1].
        Time complexity for this operation: O(n)
        Overall Time Complexity: O(n^2)

//////////////////////////////// OPTIMISED APPROACH //////////////////////////////////////
INTUTION: If we can optimise step (1), then we can optimise our overall solution.
FOR STEP (1): We need to check if a[i]>{a[i-1], a[i-2],..., a[0]}, which is same as
        a[i]>max(a[i-1],a[i-2],...,a[0])
For this, we will keep a variable max, which will store the maximum value till a[i]. 
Then we just need to check,
        a[i]>max
        a[i]>a[i+1], {if, i+1<n}
        and update max, max = max(max,a[i])
    So step(1) time complexity reduces to O(1)
        Overall time complexity: O(n)
*/

/*
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    //identify the input
    int n;
    cout<<"Enter the number of consecutive day: ";
    cin>>n;
    int visitors[n];
    cout<<"Enter the number of visitors on each day: ";
    for(int i=0;i<n;i++){
        cin>>visitors[i];
    }

    int MaxNumOfVisitors = 0; //Number of visitors can't be non-negative

    for(int i=0;i<n;i++){
        MaxNumOfVisitors = max(MaxNumOfVisitors,visitors[i]);
    }
    cout<<"Record breaking day is: "<<MaxNumOfVisitors<<endl;
    return 0;
}
*/

#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter num of consitutive days: ";
    cin>>n;
    int visitors[n+1];     //Taking n+1 size array, because we have to compare i+1th elements too
    visitors[n] = -1;      //For last day visitors. cause there can't be negative visitors.
    cout<<"Enter num of visitors on each day: ";
    for(int i=0; i<n; i++){
        cin>>visitors[i];
    }

    if(n==1){
        cout<<"Error: There must be more than 1 num of consitutive days to check recored breaking day."<<endl;
        return 0;
    }

    int num_of_record_breaking_days = 0;
    int mx = -1;       //max is the max of number of visitors till ith day. and it can't be negative.
    for(int i=0;i<n;i++){
        if(visitors[i]>mx && visitors[i]>visitors[i+1]){
            num_of_record_breaking_days++;
        }
        mx = max(mx,visitors[i]);
    }
    cout<<"Number of record breaking days: "<<num_of_record_breaking_days<<endl;
    return 0;
}