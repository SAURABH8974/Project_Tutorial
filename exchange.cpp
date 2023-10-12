#include<iostream>
using namespace std;
int main()
{
    int a ;
    int b ;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The Exchange value ..."<<endl;
    cout<<"Enter the value of a is:"<<a<<endl; 
    cout<<"Enter the value of b is:"<<b<<endl; 

  return 0;
}