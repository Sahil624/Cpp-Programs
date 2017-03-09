#include<iostream>
using namespace std;

class sample
{

public:

    friend float mean(sample s);
};

class sample1{
    int a;
    int b;


    friend float mean(sample s);
};

float mean (sample1 s)
{
    return float(s.a+s.b)/2;

    public:
        void setvalue()
    {
        a=25;
        b=40;
    }
}

int main()
{
    sample1 x;
    x.setvalue();
    cout<<"Mean value is "<<mean(x)<<endl;
}
