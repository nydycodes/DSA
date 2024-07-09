#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void merge(int arr[], int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;
    
    int lArr[n1],rArr[n2];
    
    for(int i=0;i<n1;i++){
        lArr[i] = arr[low+i];
    }
    
    for(int j=0;j<n2;j++){
        rArr[j] = arr[mid+1+j];
    }
    
    int i=0,j=0,k=low;
    
    while(i<n1 && j<n2){
        if(lArr[i]<=rArr[j]){
            arr[k] = lArr[i];
            i++;
        }
        else{
            arr[k] = rArr[j];
            j++;
        }
        k++;
    }
    
    while(i<n1){
        arr[k] = lArr[i];
        i++;k++;
    }
    
    while(j<n2){
        arr[k] = rArr[j];
        j++;k++;
    }
}

void mergeSort(int arr[], int low, int high){
    if(low>=high){
        return;
    }
    int mid = low + (high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    mergeSort(arr,0,n-1);
    display(arr,n);
    
    return 0;
}
