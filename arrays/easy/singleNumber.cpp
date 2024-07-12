//find the single number among duplicates

/*
brute-force approach

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
    
    bool flag;
    for(int i=0;i<n;i++){
        flag = false;
        for(int j=i+1;j<n;j++){
            if(arr[i]!=-1 && arr[i]==arr[j]){
                arr[j] = -1;
                flag = true;
                break;
            }
        }
        if(flag==false){
            cout<<"single element: "<<arr[i]<<endl;
            break;
        }
    }
    
}
*/

//optimal solution

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
    
    int xorr = 0;
    for(int i=0;i<n;i++){
        xorr = xorr^arr[i];
    }
    
    cout<<"single number: "<<xorr<<endl;
}
