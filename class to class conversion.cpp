#include<iostream>
using namespace std;


class square{
    int side;

    public:

    square(){

    }

    square(int s){
    side=s;
    }

    int getside(){
    return side;
    }
};

class rectangle{
    int length,bredth;

    public:
    rectangle (int l=0,int b=0){
    length = l;
    bredth = b;
    }

    rectangle (square s){
    length = bredth = s.getside();
    }

    void showdata(){
    cout<<"Lenght is :"<<length<<"Bredth is :"<<bredth<<endl;
    }
};


int main(){
square s(50);
rectangle r(s);

r.showdata();


}


