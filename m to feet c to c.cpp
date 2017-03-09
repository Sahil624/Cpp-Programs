#include<iostream>
using namespace std;

class m{
    int mtr,cm;

    public:

        m();

        m(int mt,int ct){
        mtr=mt;
        cm=ct;
        }

        int getm(){
        return mtr;
        }

        int getc(){
        return cm;
        }
};

class f{
float ft,in;


    public:

    f();

    f (m mt){
    ft=(mt.getm()*3.28084);
    in= (mt.getc()*0.393701);
    }

    void showdata(){
    cout<<ft<<"feet "<<in<<"inches"<<endl;
    }
};

int main(){
m met(15,16);
f fet(met);
fet.showdata();
}
