/*
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/

#include<iostream>
using namespace std;

int main(){
    int n,count;
    cin>>n;
    for(int i=1;i<=n;i++){
        count = 1;
        for(int j=1;j<=i;j++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
}
