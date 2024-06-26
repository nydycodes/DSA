//palindrome or not ?

#include<iostream>
using namespace std;

int main(){
    int num,rem,rev = 0;
    cout<<"enter the number: ";
    cin>>num;
    
    int ogNum = num;
    
    while(num!=0){
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    
    if(rev==ogNum){
        cout<<"palindrome!"<<endl;
    }
    else{
        cout<<"not palindrome!"<<endl;
    }
}
