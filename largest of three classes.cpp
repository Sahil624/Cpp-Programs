#include<iostream>
using namespace std;

void getval();
void display();

class one
{
    int a;
    friend int maxi();
};

class two
{
    int a;
    friend int maxi();
};

class three
{
    int a;
    friend int maxi();
};


int maxi()
{
    if(one.a > two.a)
    {
        if(one.a > three.a)
        {
            return one.a;
        }

        else
        {
            return three.a;
        }
    }

     else
        {
            return two.a;
        }
}

int main(){
one o;
two t;
three th;

o.getval();
t.getval();
th.getval();

int res=max();

display(res;)


}

void getval(){
cout<<"Enter value";
cin>>a;
}

void display(int res){
cout<<res;
}
