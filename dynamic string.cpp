#include<iostream>
using namespace std;

int main()
{
    char *arr;
    int size;

    cout<<"Enter size of array";
    cin>>size;

    cout<<"Creating an String of size"<<size<<endl;
    arr = new char[size];
    cout<<"success\n";

    cout<<"\nEnter array elements\n";

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n Elemts entered are\n";

    for(int i=0; i<size; i++)
    {
        cout<<arr[i];
    }
    delete arr;

    return 0;
}
