#include<iostream>
using namespace std;

class employee{
string name;
int no,basic,da,it,gross;

public:
void getdata(){
cout<<"Enter name,Emp no,basic salary"<<endl;
cin>>name>>no>>basic;
}

void putsal(){
cout<<"Salary is:"<<gross<<endl;
}

void calc(){
da=.52*basic;
it=.3*basic;
gross = basic + da - it;
}
};

int main(){
employee e1;

e1.getdata();
e1.calc();
e1.putsal();

return 0;
}
