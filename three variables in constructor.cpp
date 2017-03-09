#include<iostream>
using namespace std;

class dcon
{
    int *ptr,*ptr1,*ptr2;

public:
    dcon()
    {
        ptr=new int;
        *ptr = 10;
    }

    dcon(int v,int w,int x)
    {
        ptr = new int;
        ptr1 = new int;
        ptr2 = new int;
        *ptr=v;
        *ptr1=w;
        *ptr2=x;
    }

    void display()
    {
        cout<<*ptr<<*ptr1<<*ptr2;
    }
};

int main()
{
    int a,b,c;
    cout<<"Enter 3 values"<<endl;
    cin>>a>>b>>c;

    dcon obj(a,b,c);

    obj.display();
    return 0;
}
