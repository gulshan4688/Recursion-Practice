// Print from n to 1 via recursion
#include <iostream>

using namespace std;

void help(int n){
    if(n==0) return ;
    cout<<n<<" ";
    help(n-1);
}
int main(){
    help(10);
    return 0;
}