// odd numbers in descending and even numbers in ascending

#include<iostream>
#include<vector>
using namespace std;

int partitionAsc(vector<int>& arr,int low,int high){
    int pivot = arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quickSortAsc(vector<int>& arr, int low, int high){
    if(low>=high)
        return;
    int pi = partitionAsc(arr,low,high);
    quickSortAsc(arr,low,pi-1);
    quickSortAsc(arr,pi+1,high);
}

int partitionDsc(vector<int>& arr, int low, int high){
    int pivot = arr[low];
    int i = high+1;
    for(int j=high;j>=low+1;j--){
        if(arr[j]<pivot){
            i--;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i-1],arr[low]);
    return i-1;
}

void quickSortDsc(vector<int>& arr, int low, int high){
    if(low>=high)
        return;
    int pi = partitionDsc(arr,low,high);
    quickSortDsc(arr,low,pi-1);
    quickSortDsc(arr,pi+1,high);
}

int main(){
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;

    int nums[n];
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<n;i++){
        if(nums[i]%2==0){
            even.push_back(nums[i]);
        }
        else{
            odd.push_back(nums[i]);
        }
    }
    
    quickSortDsc(odd,0,odd.size()-1);
    quickSortAsc(even,0,even.size()-1);
    
    for(int i=0;i<odd.size();i++){
        cout<<odd[i]<<" ";
    }
    for(int i=0;i<even.size();i++){
        cout<<even[i]<<" ";
    }
}
