#include<iostream>
using namespace std;

class cube{
    int l;
    int b;
    int h;
    int vol;
    public:
    void getval(){
    cout<<"Enter Length breath height";
    cin>>l>>b>>h;
    }

    cube calcu(cube c){
    cube c1;

    vol=c.l*c.b*c.h;

    return c1;
    }

    void put(){
    cout<<"Volume is "<<vol;
    }


};

int main(){
cube c,c1;
int res;

c.getval();
c1.calcu(c);
c1.put();
}
