#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    
    vector<int> arr(n);
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int low=0,mid=0,high=n-1;
    
    while(mid<high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;low++;
        }
        if(arr[mid]==1){
            mid++;
        }
        if(arr[mid]==2){
            swap(arr[low],arr[high]);
            high--;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
