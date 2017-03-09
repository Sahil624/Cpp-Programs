#include<iostream>
using namespace std;
class test
{
    int code;
    static int count;
public:
    void setcode(void)
    {
        code=++count;
    }

    void showcode()
    {
        cout<<"\n code="<<code<<endl;
    }

    static void showcount()
    {
        cout<<"\n count="<<count<<endl;
    }
};
int test::count;

int main()
{
test t1,t2,t3;

t1.setcode();
t2.setcode();
test::showcount();
t3.setcode();
t1.showcode();
t2.showcode();
t3.showcode();
test::showcount();

return 0;
}

