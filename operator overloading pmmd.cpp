#include<iostream>
using namespace std;
class point
{
    int arr[10];
    int size;
public:

    point()
    {
        for(int i=0; i<10; i++)
            arr[i]=0;

        size=0;
    }

    point(int n)
    {
        size=n;
        cout<<"Enter the elements of array\n";
        for(int i=0; i<size; i++)
            cin>>arr[i];
    }

    void showdata()
    {
        for(int i=0; i<size; i++)
            cout<<"\t"<<arr[i];
        cout<<"\n";
    }

    friend point operator + (point,point);
    friend point operator -(point a1,point a2);
    friend point operator *(point a1,point a2);
    friend point operator ++(point a1);
    friend point operator ++(point a1,int);
};


point operator +(point a1,point a2)
{
    point temp1;
    temp1.size=a1.size;
    for(int i=0; i<temp1.size; i++)
        temp1.arr[i]=a1.arr[i]+a2.arr[i];

    return temp1;


}
point operator -(point a1,point a2)
{
    point temp2;
    temp2.size=a1.size;
    for(int i=0; i<temp2.size; i++)
        temp2.arr[i]=a1.arr[i]-a2.arr[i];

    return temp2;
}
point operator *(point a1,point a2)
{
    point temp3;
    temp3.size=a1.size;
    for(int i=0; i<temp3.size; i++)
        temp3.arr[i]=a1.arr[i]*a2.arr[i];

    return temp3;
}
point operator ++(point a1)
{
    point temp4;
    temp4.size=a1.size;
    for(int i=0; i<temp4.size; i++)
        temp4.arr[i]=++a1.arr[i];

    return temp4;
}

point operator ++(point a1,int)
{
    point temp4;
    temp4.size=a1.size;
    for(int i=0; i<temp4.size; i++)
        temp4.arr[i]=a1.arr[i]++;

    return temp4;
}








int main()
{
    int n;
    cout<<"enter size";
    cin>>n;
    point A(n),B(n),C;
    C=A+B;
    cout<<"The resultant array using adition operator\n";
    C.showdata();
    C=A-B;
    cout<<"The resultant array using minus operator\n";
    C.showdata();
    C=A*B;
    cout<<"The resultant array using multiplication operator\n";
    C.showdata();
    C=++A;
    cout<<"The resultant array using preincriment operator\n";
    C.showdata();
    C=A++;
    cout<<"The resultant array using postincriment operator\n";
    C.showdata();

    return 0;



}

