//count the no. of digits in a number

#include<iostream>
using namespace std;

int main(){
    int num,count = 0;
    cout<<"enter the number: ";
    cin>>num;
    
    while(num!=0){
        count++;
        num = num/10;
    }
    
    cout<<"number of digits: "<<count<<endl;
}
