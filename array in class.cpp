#include<iostream>
using namespace std;
int i=0;
class ary
{
    int arr[10];
    int size;
public:
    ary();
    ary(int n);
    void showdata();
    friend ary operator +(ary,ary);
};

ary::ary()
{
    for(i=0; i<10; i++)
    {
        arr[i]=0;
    }
    size=0;
}

ary::ary(int n)
{
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        size=n;
    }
}

void ary:: showdata()
{
    // cout<<"\n------------------"<<size<<"------------------\n"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }
}

ary operator +(ary a1,ary a2)
{
    ary temp;
    temp.size=a1.size;
    int i;
    for(i=0; i<a1.size; i++)
    {
        temp.arr[i]=a1.arr[i]+a2.arr[i];
        //cout<<"Temp\t\t"<<temp.arr<<endl;
    }
    return temp;
}

int main()
{
    int n;
    cout<<"Enter Size"<<endl;
    cin>>n;

    ary A(n),B(n),C;
    C=A+B;

    cout<<"The final Array is:"<<endl;

    C.showdata();
}
