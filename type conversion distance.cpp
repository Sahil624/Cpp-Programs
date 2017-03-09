#include<iostream>
using namespace std;

class distances{
int km,mtrs;

public:
    distances();

    void getdata(){
    cin>>km>>mtrs;
    }

    distances(int k){
    km= k/1000;
    mtrs = k%1000;
    }

    void showdata(){
    cout<<km<<"km and "<<mtrs<<"m";
    }
};

int main(){
int dis,dis1;
cin>>dis;

distances d(dis);
distances d2;
d2.getdata();
d.showdata();

dis1 = d2;
}
