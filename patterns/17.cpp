/*
      A       
    A B A     
  A B C B A   
A B C D C B A
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    char alpha;
    cin>>n;
    for(int i=1;i<=n;i++){
        alpha = 64; 
        for(int j=1;j<=n-i;j++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            if(j<=i){
                cout<<++alpha<<" ";
            }
            else{
                cout<<--alpha<<" ";
            }
        }
        for(int j=1;j<=n-i;j++){
            cout<<" "<<" ";
        }
        cout<<endl;
    }
}
