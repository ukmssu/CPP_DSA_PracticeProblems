#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int addBinary(int bn1, int bn2){
    int sum = 0;
    int prevCarry = 0;
    int i = 0;
    while(bn1>0 && bn2>0){
        if(bn1%10==0 && bn2%10==0){
            if(prevCarry==0){
                sum = sum+(0*pow(10,i));
                prevCarry = 0;
            }
            else{
                sum=sum+(1*pow(10,i));
                prevCarry = 0;
            }
        }
        else if((bn1%10==0 && bn2%10==1) || (bn1%10==1 && bn2%10==0)){
            if(prevCarry == 0){
                sum = sum+(1*pow(10,i));
                prevCarry = 0;
            }
            else{
                sum = sum+(0*pow(10,i));
                prevCarry = 1;
            }
        }
        else{
            if(prevCarry==0){
                sum = sum+(0*pow(10,i));
                prevCarry = 1;
            }
            else{
                sum = sum+(1*pow(10,i));
                prevCarry = 1;
            }
        }
        bn1 /= 10;
        bn2 /= 10;
        i++;
    }
    if(prevCarry==1){
        sum = sum+prevCarry*pow(10,i);
    }
    return sum;
}
int main(){
    int bn1,bn2;
    cout<<"Enter first binary number: ";
    cin>>bn1;
    cout<<"Enter second binary number: ";
    cin>>bn2;
    cout<<"Addition: "<<addBinary(bn1,bn2)<<endl;
    return 0;
}