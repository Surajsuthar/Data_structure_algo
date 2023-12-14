#include<iostream>
using namespace std;

void print(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<",";
    }
}

void merge(int nums[],int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(nums[left]>=nums[right]){
            temp.push_back(nums[right]);
            right++;
        }else{
            temp.push_back(nums[left]);
            left++;
        }
    }
    while (left<=mid)
    {
        temp.push_back(nums[left]);
        left++;
    }
    while (right<=high)
    {
        temp.push_back(nums[right]);
        right++;
    }
    
    for (int i = low; i <= high; i++) {
        nums[i] = temp[i - low];
    }
    
}
void mergesort(int nums[],int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergesort(nums,low,mid);
    mergesort(nums,mid+1,high);
    merge(nums,low,mid,high);
}

int main(){
    int nums[]={5,4,3,2,1};
    int size=5;
    print(nums,size);
    cout<<endl;
    mergesort(nums,0,size-1);
    print(nums,size);

    return 0;
}


