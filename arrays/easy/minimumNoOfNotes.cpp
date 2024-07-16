// {2000, 500, 200, 100, 50, 20, 10, 5, 1} 

#include<iostream>
using namespace std;

int main(){
    int amt;
    cout<<"enter the money amt: ";
    cin>>amt;
    
    int count = 0;
    while(amt!=0){
        if(amt>=2000){
            count++;
            amt-=2000;
        }
        else if(amt>=500){
            count++;
            amt-=500;
        }
        else if(amt>=200){
            count++;
            amt-=200;
        }
        else if(amt>=100){
            count++;
            amt-=100;
        }
        else if(amt>=50){
            count++;
            amt-=50;
        }
        else if(amt>=20){
            count++;
            amt-=20;
        }
        else if(amt>=10){
            count++;
            amt-=10;
        }
        else if(amt>=5){
            count++;
            amt-=5;
        }
        else if(amt>=1){
            count++;
            amt-=1;
        }
    }
    
    cout<<"minimum notes: "<<count<<endl;
}
