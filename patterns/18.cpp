/*
E 
D E 
C D E 
B C D E 
A B C D E 
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char alpha = 65+n, printAlpha;
    for(int i=1;i<=n;i++){
        alpha--;
        printAlpha = alpha;
        for(int j=1;j<=i;j++){
            cout<<printAlpha++<<" ";
        }
        cout<<endl;
    }
}
