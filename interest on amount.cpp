#include<iostream>
using namespace std;

class FD
{
    long int prin;
    int year;
    float rate;
    float rvalue;

public:
    FD()
  {
    }
    FD (long int p,int y,float r=5.2);

    FD(long int p,int y,int r);
    void display(void)
    {
        cout<<"\n Principal amount="<<prin<<"Return Amount="<<rvalue;
    }
};

FD :: FD (long int p,int y,float r)
{
    prin=p;
    year=y;
    rate=r;
    rvalue=prin;

    for(int i=1; i<y; i++)
    {
        rvalue=rvalue*(1.0+r)/100;
    }
}

FD::FD(long int p,int y,int r)
{
    prin=p;
    year=y;
    rate=r;
    rvalue=prin;
    for(int i=1; i<=y; i++)
    {
        rvalue=rvalue * (1.0+float(r))/100;
    }
}

int main()
{
    FD FD1,FD2,FD3;

    long int p;
    int y,r;
    float R;

    cout<<"Enter p,r,t";
    cin>>p>>y>>r;

    FD1=FD(p,y,r);

    cout<<"Enter p,r,t";
    cin>>p>>y>>R;

    FD2=FD(p,y,R);
    cout<<"Enter p and t";
    cin>>p>>y;

    FD3=FD(p,y);

    cout<<"\nDeposit1";
    FD1.display();

    cout<<"Deposit2";
    FD2.display();


    cout<<"Deposit 3";
    FD3.display();

    return 0;
}
