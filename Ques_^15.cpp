// find the first and last  occurence of any element 

#include<iostream>
#include<vector>
using namespace std;

int findFirst(vector<int> &arr, int &target, int idx){
    // base case 
    if((size_t)idx == arr.size()) {
        return -1;
    }
    // recursive call 
    int found = findFirst(arr, target, idx+1);
    // one case
    if(arr[idx] == target) 
        return idx;
    else 
        return found;
    
}
int findLast(vector<int> &arr, int &target, int idx){
    if(idx == -1) return -1;

    int found = findLast(arr, target, idx-1);
    if(arr[idx] == target)
        return idx;
    else    
        return found;
}
int main(){
    vector<int> arr={1,3,8,5,7,8,9};
    int target = 8;
    cout<<findFirst(arr, target,0)<<endl;
    cout<<findLast(arr, target,arr.size());

    return 0;
}