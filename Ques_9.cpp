// 🧩 Q9. Sum of Array Elements

// Concepts: Recursive traversal on arrays, using index and base cases.

// Write a recursive function that returns the sum of all elements in an array.


#include<iostream>
#include <vector>

using namespace std;
int sumOfArray(int arr[],int i , int sum, int size){
    // base case
    if(i == size) return sum;
    // ek case apna 
    sum += arr[i];
    return sumOfArray(arr, i+1, sum,size);
    
    // optimization by gulshan for lines 16 + 17 
    // return arr[i] + sumOfArray(arr, i+1 , size);
    
}
int main(){

    int arr[] = {1,2,3,4,5};
    cout<<endl<<"sum : "<<sumOfArray(arr, 0, 0, 5);
    return 0;
}