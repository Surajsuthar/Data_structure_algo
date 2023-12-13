#include<iostream>
using namespace std;

void bubbleSort(int *nums[],int size){

}

int main(){
    int size=7;
    int nums[]={2,1,5,4,3,6,0};
    for(int i=0;i<size;i++){
        cout<<nums[i]<<",";
    }
    cout<<endl;
    bubbleSort(nums,size);
}