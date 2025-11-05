// Find maximum of an array through Recursion 


#include<iostream>
#include<vector>
using namespace std;
int maximum(vector<int> arr, int idx){
    // base case 
    if((size_t)idx == arr.size()) return arr[idx];
    // recurive call 
    int maxi = maximum(arr, idx +1);
    // one case 
    if(maxi > arr[idx]) return maxi;
    else return arr[idx];

}
int main(){
    
    vector<int> arr={1001,11,0,123,7};
    cout<<"maximum number is "<<maximum(arr, 0);
    return 0;
}