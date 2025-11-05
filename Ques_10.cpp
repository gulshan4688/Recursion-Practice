// 🧩 Q10. Print All Subsets of an Array
// 🧠 Concepts:

// Recursion with choices (include/exclude pattern)

// Backtracking

// Traversing the power set of an array


#include<iostream>
#include<vector>
using namespace std;
void subset(vector<int> &arr, vector<vector<int>> &ans, vector<int> &sub, size_t i){

    // base case
    if(i == arr.size()){
         ans.push_back(sub);
         return;
    }
    // ek case apna 
    // include 
    sub.push_back(arr[i]);
    i++;
    subset(arr, ans , sub , i);
    sub.pop_back();
    i--;
    // exlclude 
    subset(arr, ans , sub , i+1);
    // backtracking


}
int main(){
    vector<int> arr =  {1,2,3};
    vector<vector<int>> ans;
    vector<int> sub;    
    size_t ind = 0 ;
    subset(arr, ans, sub , ind);
    // printing the subset
    for (size_t i = 0; i < ans.size(); i++)
    {
        cout<<"{"<<ends;
        for (size_t j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"}"<<ends;
        cout<<endl;
        
    }
    
    return 0;
}