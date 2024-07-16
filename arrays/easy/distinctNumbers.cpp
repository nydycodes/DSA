#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    int x,rem;
    vector<int> count(10,0);
    for(int i=0;i<n;i++){
        x = nums[i];
        while(x!=0){
            rem = x%10;
            count[rem]++;
            x = x/10;
        }
    }
    
    cout<<"distinct numbers: ";
    for(int i=0;i<10;i++){
        if(count[i]!=0){
            cout<<i<<" ";
        }
    }
    
    
}
