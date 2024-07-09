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
    
    int target;
    cout<<"enter the target: ";
    cin>>target;
    
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"index: "<<i<<endl;
            flag = true;
            break;
        }
    }
    if(flag==false){
        cout<<"element not found!"<<endl;
    }
}
