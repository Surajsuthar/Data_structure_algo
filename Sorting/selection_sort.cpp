#include<iostream>
using namespace std;

void print(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<",";
    }
}

void selectionSort(int nums[],int n){
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(nums[mini]>nums[j]){
                mini=j;
            }
        }
        swap(nums[i],nums[mini]);
    }
}

int main(){
    int nums[]={5,4,3,2,1};
    int size=5;
    print(nums,size);
    cout<<endl;
    selectionSort(nums,size);
    print(nums,size);

    return 0;
}


