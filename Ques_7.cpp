// 🧩 Q7. Power Function (xⁿ)

// Concepts: Divide & Conquer, even/odd decomposition, mathematical recursion.

// Write a recursive function to compute x raised to the power n (xⁿ).

// You must not use the built-in pow() function.

// Optimize it by reducing redundant multiplications (use xⁿ = (x^(n/2))² for even n).



#include<iostream>
#include<stdio.h>
using namespace std;

int toThePower(int base, int &power, int &res){
    if(power == 0) return res;
    res *= base;
    power--;
    return toThePower(base, power, res);

}
int toThePHalf(int base, int power){
    if(power == 0 ) return 1;

    int res = toThePHalf(base, power/2);
    if(power%2 == 0){ // even
        return res* res;
    }else{
        return res* res* base;
    }
}

int main(){
    cout<<"enter the base"<<endl;
    int base;
    cin>>base;
    cout<<"enter the power"<<endl;
    int power;
    cin>>power;
    int res=1;
    // cout<<toThePower(base, power, res);
    cout<<toThePHalf(base, power);
    return 0 ;
}