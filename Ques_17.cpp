
#include<iostream>
#include<vector>
using namespace std;
void all_indices(vector<int> &arr , int target, vector<int> &ans, size_t idx){
    // base case
    if(idx == arr.size()) return;
    // recursive call
    all_indices(arr, target, ans, idx+1);
    // one case 
    if(arr[idx] == target) ans.push_back(idx);
    else return ;
}

vector<int> find_indices(vector<int> &arr, int target , size_t idx, int fsf){
    // base case 
    if(idx == arr.size()) {
        vector<int> indices(fsf);
        return indices;
    }
    // jate time
    if(target == arr[idx]) fsf++;
    // recursion call 
    vector<int> indices = find_indices(arr, target, idx+1, fsf);
    // aate time 
    // check if the element on which we are either exist on the index or not 
    if(arr[idx] == target) {
        indices[fsf-1]=idx;
        return indices;
    }
    else return indices;
}
int main(){
    vector<int> arr = {3,8,4,8,5,8,9};
    int target = 8;
    // vector<int> ans;
    cout<<"starts"<<endl;
    // all_indices(arr, target, ans, 0);

    vector<int> ans = find_indices(arr, target,0,0);
    for (size_t i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}