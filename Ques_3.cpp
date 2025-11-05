// Write a recursive function that calculates the sum of digits of a given number.
// Input: n = 12345
// Expected Output: 15

#include<iostream>
#include<stdio.h>

using namespace std;

int sumOfDigit(int num, int &sum){
    if(num == 0) return sum;
    int dig = num % 10 ;
    sum += dig;
    return sumOfDigit(num / 10 , sum );
}

int main(){
    cout<<"enter the number"<<endl;
    int num=0;
    cin>>num;
    int sum = 0 ;
    cout<<endl<<sumOfDigit(num, sum);
    return 0;
}