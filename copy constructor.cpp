#include<iostream>
using namespace std;

class ABC
{
    int x,y;
public:
    ABC(int a=10)
    {
        x=y=a;
    }

    ABC (ABC &A)
    {
        x=A.x;
        y=A.y;
    }
    void display()
    {
        cout<<"x="<<x<<" y="<<y<<endl;
    }
};

int main()
{
    ABC a1(20);
    ABC a2(a1);
    a1.display();
    a2.display();
    ABC a3;
    a3=a1;
    a3.display();

    return 0;
}
