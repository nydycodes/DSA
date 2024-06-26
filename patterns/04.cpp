/*
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
*/

#include<iostream>
using namespace std;

int main(){
    int n,count;
    cin>>n;
    for(int i=1;i<=n;i++){
        count = i;
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
        }
        cout<<endl;
    }
}
