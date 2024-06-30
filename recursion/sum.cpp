#include<iostream>
using namespace std;

int summ(int n,int sum){
    if(n<1){
        return sum;
    }
    return summ(n-1, sum+n);
}

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    
    cout<<"sum: "<<summ(n,0)<<endl;
}
