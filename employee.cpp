#include<iostream>
using namespace std;

void getdata(int);
void putdata(int);

class employee
{
public:
    string name;
    int age;
};
employee e[100];
int main()
{


    int n;
    cout<<"Enter number of employees"<<endl;
    cin>>n;
    getdata(n);
    putdata(n);
}

void getdata(int n)
{
    int i;

    for(i=0; i<n; i++)
    {
        cout<<"Enter name and age of employee number "<<i+1<<endl;
        cin>>e[i].name>>e[i].age;
    }
}
void putdata(int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<"name and age of employee number "<<i+1<<" is "<<e[i].name<<" and "<<e[i].age<<endl;
    }
}
