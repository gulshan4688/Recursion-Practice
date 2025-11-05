// Q11. Print all permutations of a string

// Input: "ABC"
// Output: ABC, ACB, BAC, BCA, CAB, CBA
// 🧠 Concept: Recursion with swapping (backtracking).

#include<iostream>
using namespace std;

void Per(string word,int left, int right){
    // base case
    if(left == right){
        cout<<word<<" ";
        return ;
    }
    // one case solve 
    for(int i=left; i <= right; i++){
        swap(word[i],word[left]);
        Per(word, left+1, right);
    }
    // recursive call 
}

int main(){
    string word = "ABC";
    cout<<"Permuatations are"<<endl;
    int left =0;
    Per(word,left,word.size()-1);
    return 0;
}