#include<iostream>
using namespace std;

class complex
{
    float real,img;

public:

    complex()
    {
        real=0;
        img=0;
    }

    complex(float x,float y)
    {
        real=x;
        img=y;
    }

    complex operator +(complex);

    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};

complex complex:: operator +(complex a)
{
    complex temp;
    temp.real=real+a.real;
    temp.img=img+a.img;
   // cout<<a.real<<"*******"<<endl;
    return temp;
}

int main()
{
    complex c1(12.5,22.6),c2(36.4,12.5);

    complex c3;

    c3=c1+c2;

    c1.display();
    c2.display();
    c3.display();

    return 0;
}
