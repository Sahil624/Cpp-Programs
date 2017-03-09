#include<iostream>
using namespace std;

class times
{
    int hour;
    int minute;
public:
    void gettimes()
    {
        cout<<"Enter Hour and minute"<<endl;
        cin>>hour>>minute;
    }

    void sum(times t1,times t2)
    {
        minute = t1.minute + t2.minute;
        hour = minute/60;
        minute = minute%60;
        hour += t1.hour + t2.hour;
    }

    void puttimes()
    {
        cout<<"Hours are "<<hour<<" and minutes are "<<minute<<endl;
    }
};

int main()
{
    times t1,t2,t3;

    t1.gettimes();
    t2.gettimes();
    t3.sum(t1,t2);
    t3.puttimes();

    return 0;
}
