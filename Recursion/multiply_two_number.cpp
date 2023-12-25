#include<iostream>
using namespace std;
int mul(int a,int b){
    if(b!=0) return a+mul(a,b-1);
    return 0;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a*b<<endl;
    cout<<mul(a,b);
}