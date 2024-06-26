/*
A 
B B 
C C C 
D D D D 
E E E E E 
*/

#include<iostream>
using namespace std;

int main(){
    int n,count = 1;
    char alpha;
    cin>>n;
    for(char i=65;i<65+n;i++){
        alpha = i;
        for(int j=1;j<=count;j++){
            cout<<alpha<<" ";
        }
        count++;
        cout<<endl;
    }
}
