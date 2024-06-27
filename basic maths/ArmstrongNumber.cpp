//armstrong number or not ?

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num;
    cout<<"enter the number:";
    cin>>num;
    
    int ogNum = num;
    int armstrongNo = 0;
    int rem,power;
    
    while(num!=0){
        rem = num%10;
        power = pow(rem,3);
        armstrongNo += power;
        num = num/10;
    }
    
    if(ogNum==armstrongNo){
        cout<<"armstrong!"<<endl;
    }
    else{
        cout<<"not armstrong!"<<endl;
    }
}
