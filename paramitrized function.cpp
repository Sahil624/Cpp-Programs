#include<iostream>
using namespace std;

class abc
{
    int x,y;
public:
    abc(int a,int b)
    {
        x=a,y=b;
    }

    void display()
    {
        cout<<"x="<<x<<" y="<<y<<endl;
    }
};

int main()
{
    abc a1(10,20);
    abc a2=abc(40,50);

    a1.display();
    a2.display();

    return 0;
}
