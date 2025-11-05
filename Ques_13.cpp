// Print array and reverse array through Recursion 

#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &arr, int i){
    // base case 
    if(i == arr.size()) return ;
    // one case
    // recusrive call
    print(arr,i+1);
    cout<<arr[i]<<" ";
}
int main(){
    //input type is n then all n elements 
    int n ;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter all the elemenst of the array"<<endl;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        arr[i]=num;
    }
    print(arr,0);
    
    return 0;
}