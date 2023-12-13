#include<iostream>
using namespace std;

void print(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<",";
    }
}

void insertionSort(int nums[],int n){
    for(int i=1;i<n;i++){
        int key=nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
    }
}

int main(){
    int nums[]={5,4,3,2,1};
    int size=5;
    print(nums,size);
    cout<<endl;
    insertionSort(nums,size);
    print(nums,size);

    return 0;
}


