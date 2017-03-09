#include<iostream>
#include<math.h>
using namespace std;

class number
{
    float real;
    float comp;
    float realc;
    float compc;
public:
    void getnumber()
    {
        cout<<"Enter Real and Imaginary part of number"<<endl;
        cin>>real>>comp;
        realc=real;
        compc=comp;
    }

    void sum(number t1,number t2)
    {
        real = t1.real + t2.real;
        comp = t1.comp + t2.comp;
    }

    void sub(number t1,number t2)
    {
        real=realc;
        comp=compc;
        real = t1.real - t2.real;
        comp = t1.comp - t2.comp;
    }

    void mul(number t1,number t2)
    {
        real=realc;
        comp=compc;
        real=((t1.real)*(t2.real))-((t1.comp)*(t2.comp));
        comp=((t1.real)*(t2.comp))+((t2.real)*(t1.comp));
    }

    void div(number t1,number t2)
    {
        real=realc;
        comp=compc;

        real=(((t1.real)*(t2.real))+((t1.comp)*(t2.comp)))/(pow(t2.real,2)+pow(t2.comp,2));
        comp=(((t2.real)*(t1.comp))-((t1.real)*(t2.comp)))/(pow(t2.real,2)+pow(t2.comp,2));
    }

    void putnumber()
    {
        cout<<real<<"+"<<comp<<"i"<<endl;
    }
};

int main()
{
    number t1,t2,t3;

    t1.getnumber();
    t2.getnumber();
    t3.sum(t1,t2);
    cout<<"Sum is:"<<endl;
    t3.putnumber();
    t3.sub(t1,t2);
    cout<<"Subtraction is:"<<endl;
    t3.putnumber();
    t3.mul(t1,t2);
    cout<<"Multipy is:"<<endl;
    t3.putnumber();
    t3.div(t1,t2);
    cout<<"Division is:"<<endl;
    t3.putnumber();
}
