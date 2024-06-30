#include<iostream>
using namespace std;

int rev(int n,int rem){
    if(n==0){
        return rem;
    }
    rem = rem*10+n%10;
    n /= 10;
    return rev(n,rem);
}
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    
    cout<<"reverse: "<<rev(n,0)<<endl;
}
