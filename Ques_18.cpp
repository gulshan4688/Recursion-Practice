/*
Here we are finding subsequences 
1. we have already did it with include and exclude as per love babbar method but here
2. we will do it with perp coding method ie. if u have a string then take out the first character and call recusrion for rest of the string 
like in initially we have  "abc"
then call(abc)
take out 'a' then call(bc)
take out 'b' then call(c)
take out 'c' then call("") [empty string] now this hits a base case and now we start building subsequences so 
if(word ka size == 0) return [""] // an array with empty string 

after the line recursion call below it we will have our operattion so that method is 
as we extracted the character so that char will add to both to make a new string 
for (string each : returned_array_of_string){
        ["-"] pehle se hi hai usme ke c add krke array pe push kr do 
        so now array becomes ["-","-c"]
        this way now b will be added to both so now array becomes ["-", "-c", "-b","-bc" ]
        and thired adding a to the make subsequnces it becomes ["-", "-c", "-b","-bc" , "-a", "-ca", "-ba", "-bca"]
    }


    !! so what mistakes did i made like i did not make a new array to store the result and return it to at last , i was litterly 
    modifying the orignal returned array which making the for loop infinite  because the array which we were using in for loop afer 
    recursion call same array we were modifiying so it was addint elements in the array and making it never ending 
    so always make a new array to store the result and return it .
*/


#include<iostream>
#include<vector>
using namespace std;
vector<string> subsequnces(string word){
    // base case
    if(word.size() == 0){
        vector<string> ans;
        ans.push_back("");
        return ans;
    }
    //one case before 
    char takeOut =  word[0];
    string recur_call_string = word.substr(1);
    // recursive call 
    vector<string> returned_arr = subsequnces(recur_call_string);
    // one case 
    vector<string> new_result;
    for(string every  : returned_arr){
        new_result.push_back(every);
        new_result.push_back(takeOut + every);
    }
    return new_result;
}
int main(){
    string word = "abc";
    // we have to calculate its subsequences 
    cout<<"starts"<<endl;
    vector<string> print = subsequnces(word);
    cout<<"starts"<<endl;
    for (size_t i = 0; i < print.size() ; i++)
    {
        cout<<print[i]<<endl;
    }
    
    return 0;
}