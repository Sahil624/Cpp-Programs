#include<iostream>
#include<string.h>
using namespace std;
class data
{
    char *a;
public:
    data(char *b)
    {
        a= new char(strlen(b)+1);
        strcpy(a,b);
    }
    void show()
    {
        a[0]=a[0]-32;
        cout<<"\n"<<a;
    }
    void compare(data d2)
    {
        if(strcmp(d2.a,a))
            cout<<"\nBoth Objects have different text";
        else
            cout<<"\nBoth Objects have same text";
    }

};




int main()
{
    data d1("obfuscation");
    data d2("obstruction");
    d1.show();
    d2.show();
    d1.compare(d2);
    return 0;
}
