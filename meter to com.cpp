#include<iostream>
using namespace std;

class dis{
public:

int meter;
int cm;

    void getval(){
    cout<<"Enter distance in meter and centimeter";
    cin>>meter>>cm;
    }

    void display(){
    cout<<"Values are";
    cout<<cm;
    }

    friend dis convert(dis);
};

dis convert(dis dis1){
dis dis2;

dis2.meter=dis1.meter*100;
dis2.cm=dis1.cm+dis2.meter;

return dis2;
}

int main(){
dis dis1,dis2;

dis1.getval();

dis2=convert(dis1);

cout<<"Distance in cm is "<<dis2.cm;
}
