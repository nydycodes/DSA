//print n to 1

#include<iostream>
using namespace std;

void print(int i,int n){
    if(n<i) return;
    cout<<n<<endl;
    print(i,--n);
}

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    
    print(1,n);
}
