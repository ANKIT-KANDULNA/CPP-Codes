#include <iostream>
using namespace std;
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         vector<int> temp;
         int left=l;
         int right=m+1;
         while(left<=m && right<=r){
             if(arr[left]<=arr[right]){
                 temp.push_back(arr[left]);
                 left++;
             }
             else{
                 temp.push_back(arr[right]);
                 right++;
             }
         }
         while(left<=m){
             temp.push_back(arr[left]);
             left++;
         }
         while(right<=r){
             temp.push_back(arr[right]);
             right++;
         }
         for(int i=l;i<=r;i++){
             arr[i]=temp[i-l];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l==r){
             return;
         }
         int mid=l+(r-l)/2;
         mergeSort(arr,l,mid);
         mergeSort(arr,mid+1,r);
         merge(arr,l,mid,r);
    }
};
int main(){
    
    return 0;
}