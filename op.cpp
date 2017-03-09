#include<iostream>
using namespace std;
class op
{
int a;
public:
op(int x)
{
a=x;}
//b=y;}
void operator+(op b)
{
cout<<"\na+b is: "<<a+b.a;
}
void operator-(op b)
{
cout<<"\na-b is: "<<a-b.a;}

void operator==(op b)
{
if(a==b.a)
cout<<"\n numbers are equal";
else
{ cout<<"\n numbers are not equal";}

}
};
int main()
{
int x,y;
cout<<"enter the value of a and b";
cin>>x>>y;
op A(x),B(y);
A.operator+(B);
A.operator-(B);
A.operator==(B);
return 0;
}
