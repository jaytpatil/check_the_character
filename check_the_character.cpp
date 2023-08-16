#include<iostream>
using namespace std;

int main(){
 char ch;
 cout<<"Enter character: ";
 cin>>ch;

 if(ch>=65 && ch<=90) {
    cout<<"character: capital letter"<<endl;
    ch=ch+32;
    cout<<"character: "<<ch<<endl;
 }
 else {
    cout<<"character: small letter"<<endl;
    ch=ch-32;
    cout<<"character: "<<ch<<endl;
 }
    return 0;
}