// 🧩 Q5. Reverse a String

// Write a recursive function that prints or returns the reverse of a string.
// Input: "hello"
// Expected Output: "olleh"

#include<iostream>
#include<stdio.h>
using namespace std; 
string reverse(int l , int h , string &word){
    if(l >= h ) return word;
    swap(word[l], word[h]);
    l++,h--;
    return reverse(l,h,word);
}
int main(){
    string word;
    cout<<"enter the word"<<endl;
    cin>>word;
    cout<<reverse(0, word.length()-1,word);
    return 0;
}