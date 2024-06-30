#include<iostream>
using namespace std;

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    
    cout<<"factorial: "<<fact(n)<<endl;
}
