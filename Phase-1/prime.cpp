#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter your number to check prime: ";
    cin>>n;
    int i;
//Method-1
    // for(i=2; i<sqrt(n); i++){
    //     if(n%i==0){
    //         cout<<"Non-Prime"<<endl;
    //         break;
    //     }
    // }
    //     if(i==n)
    //     {
    //         cout<<"Prime"<<endl;
    //     }

//Method-2
//    int flag = 1; // Assume the number is prime initially
//    if(n<=1){
//     flag = 0;  // Numbers less than or equal to 1 are not prime
//    } else{
//     for(int i = 2; i<=sqrt(n); i++){
//         if(n%i == 0){
//             flag = 0; //Number divisible by any number other than 1 and itself are not prime
//             break;
//         }

//     }
//    }
//    if(flag==1){
//     cout<<"Given number is prime"<<endl;
//    }
//    else{
//     cout<<"Given number is non-prime"<<endl;
//    }

//Method-3

   bool flag = true; // Assume the number is prime initially
   if(n<=1){
    flag = false;  // Numbers less than or equal to 1 are not prime
   } else{
    for(int i = 2; i<=sqrt(n); i++){
        if(n%i == 0){
            flag = false; //Number divisible by any number other than 1 and itself are not prime
            break;
        }

    }
   }
//    if(flag==true)
   if(flag)
   {
    cout<<"Given number is prime"<<endl;
   }
   else{
    cout<<"Given number is non-prime"<<endl;
   }

   
    return 0;
}