#include<iostream>
using namespace std;

class faran{
    float fr;

    public:
        faran(int fff=50){
        fr =fff;
        }


        float getval(){
        return fr;
        }
};

class celc{
    float cl;

    public:

    celc();

    celc(faran f){
        //cout<<f.getval();
        cl=((f.getval() - 32) * .5555556);
    }

    void showdata(){
        cout<<cl<<"degree celcius";
    }


};


int main(){
faran f;
celc c(f);

c.showdata();
}
