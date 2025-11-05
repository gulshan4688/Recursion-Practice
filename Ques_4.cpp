// 🧩 Q4. Factorial using Recursion

// Write a recursive function to find the factorial of a number.
// Input: n = 6
// Expected Output: 720

#include<iostream>
#include<stdio.h>
using namespace std;
int factorial(int num, int &ans){
    if(num == 1) return ans;
    ans *= num;
    return factorial(num-1, ans);
}
int main(){
    int num , ans =1  ;
    cout<<"enter the number"<<endl;
    cin>>num;
    cout<<endl<<factorial(num, ans);
    return 0;
}