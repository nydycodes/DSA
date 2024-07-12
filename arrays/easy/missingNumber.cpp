// optimal

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
    
    int sum = (n*(n+1))/2;
    int calcSum = 0;
    for(int i=0;i<n;i++){
        calcSum += arr[i];
    }
    
    cout<<"missing value: "<<sum-calcSum<<endl;
}

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
    
    int count[n+1] = {0}; 
    for(int i=0;i<n;i++){
        count[arr[i]] += 1;
    }
    
    for(int i=0;i<n+1;i++){
        if(count[i]==0){
            cout<<"missing number: "<<i<<endl;
        }
    }
}
*/
