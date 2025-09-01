#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    cout<<"elements before swaping:";
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"elements after swaping:";
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    return 0;
}