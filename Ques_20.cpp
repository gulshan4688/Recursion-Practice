/*

this question ask for number of ways u can reach a bottom of stairs if we start from top ,
n = total number of staris 
you can go for 1 or 2 or 3 step at a time now making combination from these 3 steps find the total number of ways to reach bottom 
for eg:   n = 3 so number of ways are [ 111, 12, 21, 3]
go for 1 step at a time that makes it 1 1 1 and 
if go for 1 step and then 2 step 
if go for 2 step and then 1 step 
or go all in 3 step at a time that makes the comibination ans as : [ 111, 12, 21, 3]

*/
#include<iostream>
#include<vector>
using namespace std;

int main(){

    cout<<"enter the number of stairs"<<endl;
    int n;
    cin>>n;
    getWays(n);
    return 0;
}