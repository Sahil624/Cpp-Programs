#include<iostream>
using namespace std;

void swap(int x,int y);

int main()
{

    int a,b;
    cout<<"Enter a and b";
    cin>>a>>b;

    swap(a,b);
}

void swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;

    cout<<"a="<<x<<endl;
    cout<<"b="<<y;
}

