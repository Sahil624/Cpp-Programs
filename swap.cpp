#include<iostream>
using namespace std;

class abc{
int a,b;

public:
void getdata(){
    cout<<"Enter a and b";
    cin>>a>>b;
}

void swapr(){
    int temp=a;
    a=b;
    b=temp;

    cout<<"Swap by Refrence:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}

void swapv(){
    int temp=a;
    a=b;
    b=temp;

    cout<<"Swap by Value:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
};


int main()
{

    abc obj1,obj2;

    obj1.getdata();
    obj2=obj1;
    obj1.swapr();
    obj2.swapv();
}
