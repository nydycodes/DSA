//reverse of a number

#include<iostream>
using namespace std;

int main(){
    int num,rem,rev = 0;
    cout<<"enter the number: ";
    cin>>num;
    
    while(num!=0){
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    
    cout<<"reversed number: "<<rev<<endl;
}
