#include<iostream>
using namespace std;
int fun(int n){
    if(n<=1) return n;
    return n*fun(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fun(n)<<endl;
    int ans=1;
    for(int i=n;i>=1;i--){
        ans*=i;
    }
    cout<<ans;
}