//move all the zeros to the end of the array

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
    
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i]==0){
            if(arr[j]!=0){
                swap(arr[i],arr[j]);
                i++;j--;
            }
            else{
                j--;
            }
        }
        else{
            i++;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
