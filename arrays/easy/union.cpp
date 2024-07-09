//union of sorted arrays

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cout<<"enter the values of m and n: ";
    cin>>m>>n;
    
    int arr1[m],arr2[n];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int j=0;j<n;j++){
        cin>>arr2[j];
    }
    
    int x;
    bool flag;
    vector<int> union_;
    
    for(int i=0;i<m;i++){
        x = arr1[i];
        flag = false;
        for(int j=0;j<count;j++){
            if(x==union_[j]){
                flag = true;
            }
        }
        if(flag==false){            
            union_.push_back(x);
        }
    }
    
    for(int j=0;j<n;j++){
        x = arr2[j];
        flag = false;
        for(int i=0;i<count;i++){
            if(x==union_[i]){
                flag = true;
            }
        }
        if(flag==false){            
            union_.push_back(x);
        }
    }
  
    for(int i=0;i<union.size();i++){
        cout<<union_[i]<<" ";
    }
    cout<<endl;
}
