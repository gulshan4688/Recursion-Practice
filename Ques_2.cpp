// print 1 to n via recursion

#include<iostream>
using namespace std;

#include <iostream>

using namespace std;

void help(int n){
    if(n==0) return ;
    help(n-1);
    cout<<n<<" ";
}
int main(){
    help(10);
    return 0;
}