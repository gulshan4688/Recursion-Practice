
#include<iostream>
using namespace std;
bool palindrome(string &word, int l , int h){
    // base case 
    if(l >= h) return true;
    // ek case hum log solve karenge
    if(word[l] != word[h]) return false; 
    return palindrome(word,l+1, h-1);
    // return the value 

}
int main(){
    cout<<"Enter a word"<<endl;
    string word;
    cin>>word;

    if(palindrome(word, 0, word.length()-1))  cout<<"Yes Palindrome";
    else cout<<"Not Plaindrome";
    return 0;
}