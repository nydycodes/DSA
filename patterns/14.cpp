/*
A 
A B 
A B C 
A B C D 
A B C D E 
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    char alpha;
    cin>>n;
    for(int i=1;i<=n;i++){
        alpha = 'A';
        for(int j=1;j<=i;j++){
            cout<<alpha++<<" ";
        }
        cout<<endl;
    }
}
