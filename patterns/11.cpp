/*
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    bool flag;
    cin>>n;
    for(int i=1;i<=n;i++){
        (i%2==0)?flag=0:flag=1;
        for(int j=1;j<=i;j++){
            cout<<flag<<" ";
            flag = !flag;
        }
        cout<<endl;
    }
}
