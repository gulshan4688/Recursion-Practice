// couting from n to 1 and then 1 to n  recursively 
#include<iostream>
using namespace std;
void printing(int n ){
    if(n == 0 ) return;
    cout<<n<<endl;
    printing(n-1); 
    cout<<n<<endl;
}
int main(){
    cout<<"enter the value of n "<<endl;
    int n ;
    cin>>n;
    printing(n);
    return 0;
}