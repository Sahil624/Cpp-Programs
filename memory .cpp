#include<iostream>
using namespace std;

int main()
{
    int *arr;
    int size;

    cout<<"Enter size of array";
    cin>>size;

    cout<<"Creating an array of size"<<size<<endl;
    arr = new int[size];
    cout<<"success\n";

    cout<<"\nEnter array elements\n";

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n Elemts entered are\n";

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }
    delete arr;

    return 0;
}
