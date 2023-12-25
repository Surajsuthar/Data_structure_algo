#include<iostream>
using namespace std;
int count(string str,int i){
    //int i=0;
    if(str[i]=='\0') return 0;
    count(str,i+1);
    return i;
    
}
int main(){
    string str;
    cin>>str;
    int i=0;
    cout<<count(str,i);
}