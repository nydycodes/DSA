//print name 'n' times 

#include<iostream>
using namespace std;

int count = 0;
void printName(string name, int n){
    if(count==n) return;
    cout<<name<<endl;
    count++;
    printName(name,n);
}

int main(){
    int n;
    string name;
    cout<<"enter your name: ";
    getline(cin,name);
    cout<<"enter the value of n: ";
    cin>>n;
    
    printName(name,n);
}
