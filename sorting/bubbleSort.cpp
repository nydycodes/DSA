#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        bool flag = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(flag==false){
            break;
        }
    }
}

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    
    int arr[n];
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"before sorting: ";
    display(arr,n);
    
    bubbleSort(arr,n);
    
    cout<<"after sorting: ";
    display(arr,n);
    
}
