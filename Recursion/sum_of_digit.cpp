#include<iostream>
using namespace std;
int digit(int n){
    if(n==0) return 0;
    return n%10+digit(n/10);
}
int main(){
    int n;
    cin>>n;
    cout<<digit(n);
}