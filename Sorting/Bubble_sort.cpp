#include<iostream>
using namespace std;

void print(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<",";
    }
}

void bubbleSort(int nums[],int n){
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                flag=false;
            }
        }
        if(flag==true){
            break;
        }
    }
}

int main(){
    int nums[]={5,4,3,2,1};
    int size=5;
    print(nums,size);
    cout<<endl;
    bubbleSort(nums,size);
    print(nums,size);

    return 0;
}


