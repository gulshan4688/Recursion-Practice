// 🧩 Q6. Fibonacci Series (Nth Term)

// Write a recursive function to return the Nth Fibonacci number.
// Input: n = 7
// Expected Output: 13
// (Hint: Fibonacci series → 0, 1, 1, 2, 3, 5, 8, 13, ...)


#include<iostream>
#include<stdio.h>
using namespace std;
int fibonacci(int first, int second , int &num , int &res){

    if(num == 2) return res;
    if(num == 0) return 0;
    if(num == 1) return 1;

    res = first + second ;
    cout<<res<<" ";
    num--;
    return fibonacci(second, res, num, res);

}
int main(){
    cout<<"enter the number for fibonacci"<<endl;
    int num;
    cin>>num;
    num = num+1;
    int res = 0;
    cout<<endl<<"the "<<num<<"th number is "<<fibonacci(0, 1, num, res);
    return 0;
}