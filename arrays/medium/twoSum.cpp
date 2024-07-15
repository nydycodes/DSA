#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    
    vector<int> arr(n);
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int target;
    cout<<"enter the target: ";
    cin>>target;
    
    vector<int> result;
    bool flag = false;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])==target){
                result.push_back(i);
                result.push_back(j);
                flag = true;
                break;
            }
        }
        if(flag==true){
            break;
        }
    }
    
    if(flag==false){
        result.push_back(-1);
        result.push_back(-1);
    }
    
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}
