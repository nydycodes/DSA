//rotate the array leftwards by 'k' steps

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
    
    int k;
    cout<<"enter the number of steps: ";
    cin>>k;
    
    if(k>=n)
        k = k%n;
    
    int i = 1;
    while(i<=k){
        int key = arr[0];
        for(int j=1;j<n;j++){
            arr[j-1] = arr[j];
        }
        arr[n-1] = key;
        i++;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
