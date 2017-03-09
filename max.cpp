#include<iostream>
using namespace std;

int & max(int & x,int & y);

int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    max(a,b)=-1;

    if(a==-1)
    {
        cout<<"a is big"<<endl;
    }
    else
    {
        cout<<"b is big"<<endl;
    }
}

int & max(int & x,int & y)
{

    if(x>=y)
        return x;
    else
    {
        return y;
    }

}
