#include<iostream>
using namespace std;

/********************************************************  Class  ********************************************************/


class matrix
{
    int **ptr;
    int d1,d2;

public:
    matrix (int x,int y)
    {
        d1=x;
        d2=y;
        ptr = new int *[d1];
        for(int i=0; i<d1; i++)
        {
            ptr[i]=new int[d2];
        }
    }

    void getval(int i,int j,int val)
    {
        ptr[i][j]=val;
    }

    int & putval(int i,int j)
    {
        return (ptr[i][j]);
    }
};

/********************************************************  Main  ********************************************************/


int main()
{
    int m,n,value;

    cout<<"Enter size of matrix";
    cin>>m>>n;

    matrix A(m,n);

    cout<<"Enter elements of matrix";

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>value;
            A.getval(i,j,value);
        }
    }

    cout<<"\n"<<A.putval(1,1);
    return 0;
}
