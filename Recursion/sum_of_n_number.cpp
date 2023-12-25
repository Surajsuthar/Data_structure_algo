#include<iostream>
using namespace std;
int sumi(int n){
    int sum=0;
    if(n<=1) return n;
    sum+=n+sumi(n-1);
    return sum;
}
int main(){
    int n;
    cin>>n;
    int ans=sumi(n);
    cout<<ans;
}