// This is question 17 find all indices in an array of an element just like we found first and last occurence of any element 
// like in an array we have a target like 8 and in output we have to return an array in which all the indeces of target 8 is present 

/*
we will assume that one case will be solved by us but from rest of the array all indices will be saved in ans array after we make a call
for all_indices(arr, target, ans, idx+1);
Here we have followed two ways like for first one i did it for my self and for second one i tried with yt tutorial (hints se not completely copied)
1. so in my fucntion as u can see all_indices i passes arr, target and ans array and idx so that it becomes very easy but gets all indices in 
reverse direction but accr to chatGPT its more simpler and can be used anywhere 
2. and in second code was more complex compared to above one but its good for understanding recursion as we dont know how many target are present in the 
array so we cant make a random size we need to find the size of the ans so that it does get shorter or wastes spaces
  -- as we go up in the call stack we stored a variable fsf (found so far) that tracks how many targets we have found till we
    reach the base case now since we reach base case if suppose there were 3 target = 8 , elements were present in the array so now 
    before returning we need to initialize the array of size 3 and them we return .
    as we come to this line of the code   [3,8,4,8,5,8,9]
    vector<int> indices = find_indices(arr, target, idx+1, fsf);
    this indices vector is the array which catches the retuned array from the call so now in this array we will fill on what indx the 
    target is present like for this 
    as we are returning back from call stack we are checking after the every return, target exists or not if (arr[idx] == target) then yes 
    and  fill the indices[fsf-1] = idx. [ , ,5 ]
    and then                            [ ,3,5 ]
    and then                            [ 1,3,5 ]
    *** we do fsf -1 because if fsf is 3 but at idx = 3 its not valid so we do fsf -1 = 2 that is last idx of size 3 array 
    and if we not found the arr[idx]== target then we simply return indices;
*/
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