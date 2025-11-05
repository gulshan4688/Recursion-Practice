
#include<iostream>
#include<vector>
using namespace std;
vector<string> codes = {".;","abc","def","ghi","jkl","mno","pqrs", "tu", "vwx","yz"};
vector<string> keyPad(string num){
    // base case 
    if(num.size() == 0){
        vector<string> ans;
        ans.push_back("");
        return ans;
    }
    // one case 
    char takeout = num[0];
    // recursive call 
    string tobe_sent = num.substr(1);
    vector<string> returned_res = keyPad(tobe_sent);
    // after recursion case 
    vector<string> my_res;
    for(size_t i=0; i < codes[takeout-'0'].size() ; i++){
        char tobe_added = codes[takeout-'0'][i];
        for(string every : returned_res){
            my_res.push_back(tobe_added + every);
        }
    }
    return my_res;
}
int main(){
    cout<<"enter the number"<<endl;
    string num;
    cin>>num;
    vector<string> print = keyPad(num);
    for (size_t i = 0; i < print.size() ; i++)
    {
        cout<<print[i]<<" ";
    }
    return 0;
}