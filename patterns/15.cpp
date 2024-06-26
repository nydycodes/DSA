/*
A B C D E 
A B C D 
A B C 
A B 
A 
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    char alpha;
    cin>>n;
    for(int i=n;i>=1;i--){
        alpha = 'A';
        for(int j=1;j<=i;j++){
            cout<<alpha++<<" ";
        }
        cout<<endl;
    }
}
