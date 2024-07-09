#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    
    int arr[n];
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int key = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = key;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
