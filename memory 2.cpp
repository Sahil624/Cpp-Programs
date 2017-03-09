#include<iostream>
using namespace std;

class dcon
{
    int *ptr;

public:
    dcon()
    {
        ptr=new int;
        *ptr = 10;
    }

    dcon(int v)
    {
        ptr = new int;
        *ptr=v;
    }

    int display()
    {
        return *ptr;
    }
};

int main()
{
    dcon obj1,obj2(150),obj3,obj4(100);
    obj3=obj4;
    cout<<"Value"<<obj1.display()<<endl;
    cout<<"Value"<<obj2.display()<<endl;
    cout<<"Value"<<obj4.display();
    return 0;
}
