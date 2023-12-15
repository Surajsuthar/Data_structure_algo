#include<iostream>
using namespace std;

void print(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<",";
    }
}

int quick(int nums[],int low,int high){
    int pivot=nums[low];
    int i=low;
    int j=high;
    while(i<j){
        while(nums[i]<=pivot && i<=high-1){
            i++;
        }
        while(nums[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(nums[i],nums[j]);
    }
    swap(nums[low],nums[j]);
    return j;
}

void quickSort(int nums[],int low,int high){
    if(low<high){
        int parti=quick(nums,low,high);
        quickSort(nums,low,parti-1);
        quickSort(nums,parti+1,high);
    }
}

int main(){
    int nums[]={5,4,3,2,1};
    int size=5;
    print(nums,size);
    cout<<endl;
    quickSort(nums,0,size-1);
    print(nums,size);

    return 0;
}


