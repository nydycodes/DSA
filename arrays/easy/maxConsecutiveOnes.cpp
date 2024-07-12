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
    
    int count, maxCount = 0;
    int i=0;
    while(i<n){
        count = 0;
        while(i<n && arr[i]==1){
            count++;
            i++;
        }
        if(maxCount<count)
            maxCount = count;
        i++;
    }
    
    cout<<"maximum consecutive ones: "<<maxCount<<endl;
}
