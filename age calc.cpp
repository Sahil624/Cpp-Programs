#include<iostream>
using namespace std;
class persondata{
    int birthmonth,birthyear;
    float cm,meters;
    int currentmonth,currentyear;
    int agey,agem;

    public:

    void getdata(){
     cout<<"Enter Your Birth Year:";
    cin>>birthyear;
    cout<<"\nEnter Your Birth Month:";
    cin>>birthmonth;
    cout<<"\nEnter The Current Month:";
    cin>>currentmonth;
    cout<<"\nEnter The Current Year:";
    cin>>currentyear;
    cout<<"\nEnter Your Height in Meters:";
    cin>>meters;
    }

    void calc(){
    int m;
     cm=meters*100;
         agey=currentyear-birthyear;
    m=currentmonth-birthmonth;
    if(m<0){
        agey=currentyear-birthyear+m;
        agem=12+m;}

    }

    void putdata(){
    cout<<"\nYour Age is "<<agey<<" Years And "<<agem<<" Months and Height in Centimeter is "<<cm;
    }
};

int main()
{
  persondata per;
  per.getdata();
  per.calc();
  per.putdata();


    return 0;
}
