//print 1 to n

#include<iostream>
using namespace std;

void print(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    print(++i,n);
}

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    
    print(1,n);
}
