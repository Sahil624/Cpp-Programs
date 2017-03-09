#include<iostream>
using namespace std;

class times
{
    int hrs,mins;

public:
    void getval()
    {
        cout<<"Enter times in hours and seconds"<<endl;
        cin>>hrs>>mins;
    }

    void putval()
    {
        cout<<"times is "<<hrs<<"Hours and "<<mins<<"Minutes"<<endl;
    }

    friend times check(times t);

    friend times add(times t1,times t2);

    friend times operator ++(times);
};

times check(times t){
        if(t.mins>59)
        {
        //cout<<"jbdakj";
            t=++t;
            //cout<<t.hrs<<"\t"<<t.mins;
        }
        return t;
    }

times add(times t1,times t2)
{
    times temp;
    temp.hrs=t1.hrs + t2.hrs;
    temp.mins = t1.mins + t2.mins;

    return temp;
}

times operator ++(times t1)
{
    t1.hrs++;
    t1.mins=t1.mins-60;
    //cout<<t1.hrs<<"\t"<<t1.mins;
    return t1;
}

int main()
{
    times t1,t2,t3;

    t1.getval();
    t2.getval();

    t3=add(t1,t2);

    t3=check(t3);

    t3.putval();
}
