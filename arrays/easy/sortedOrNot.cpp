#include<iostream>
#include<climits>
using namespace std;

void insertionSort(int arr[],int n){
    int i,j,key;
    for(int i=1;i<n;i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    
    int arr[n];
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int org[n];
    for(int i=0;i<n;i++){
        org[i] = arr[i];
    }
    
    insertionSort(arr,n);
    
    bool flag;
    for(int i=0;i<n;i++){
        flag = false;
        if(org[i] != arr[i]){
            flag = true;
        }
    }
    
    if(flag){
        cout<<"not sorted!"<<endl;
    }
    else{
        cout<<"sorted!"<<endl;
    }
    
    return 0;
}
