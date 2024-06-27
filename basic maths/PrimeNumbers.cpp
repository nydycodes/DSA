//prime number or not?

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    
    bool flag = false;
    int sqrt_ = sqrt(num);
    
    for(int i=2;i<=sqrt_;i++){
        if(num%i==0){
            flag = true;
            break;
        }
    }
    if(flag==false){
        cout<<"prime number!"<<endl;
    }
    else{
        cout<<"not prime number!"<<endl;
    }
}
