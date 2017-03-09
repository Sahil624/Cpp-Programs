//3.28084f 0.393701i

#include<iostream>
using namespace std;

class distancea
{

    float feet,inches,meter,cm;

public:

    void getvalf()
    {
        cout<<"Enter distance in feet and inches"<<endl;
        cin>>feet>>inches;
    }

    void getvalm()
    {
        cout<<"Enter distance in meter and centimeter"<<endl;
        cin>>meter>>cm;
    }

    void mtof()
    {
        meter=3.28084*meter;
        cm=.393701*cm;
    }

    void sum()
    {
        feet += meter;
        inches += cm;
    }

    void display()
    {
        cout<<"Sum is"<<feet<<"feet and "<<inches<<"inches"<<endl;
    }
};

int main()
{
    distancea d;

    d.getvalf();
    d.getvalm();
    d.mtof();
    d.display();

    return 0;
}
