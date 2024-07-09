//duplicate element in sorted array

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    
    int arr[n];
    cout<<"enter the elements(sorted): ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int i;
    bool flag = false;
    for(i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            flag = true;
            break;
        }
    }
    
    if(flag==true){
        cout<<"duplicate element: "<<arr[i]<<endl;
    }
    else{
        cout<<"no duplicates!"<<endl;
    }
}
