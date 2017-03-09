#include<iostream>
using namespace std;

class example
{
    int x,y;
public:
    void operator -()
    {
        x=-x;
        y=-y;
    }

    void display()
    {
        cout<<"\n x= "<<x;
        cout<<"\n y= "<<y<<endl;
    }

    example(int a,int b)
    {
        x=a;
        y=b;
    }

    example(){
    }
};

int main()
{
    example e1(11,12),e2;

    -e1;
    e1.display();

    e2=example(14,-55);
    -e2;

    e2.display();
    return 0;
}
