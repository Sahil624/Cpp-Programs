#include<iostream>
using namespace std;

int i=0,j=0;

class matrix
{
    int mtrx[100][100],size;

public:
    void getval()
    {
        cout<<"Enter size of matrix"<<endl;
        cin>>size;
        cout<<"Enter the elements of matrix"<<endl;

        for(i=0; i<size; i++)
        {
            for(j=0; j<size; j++)
            {
                cin>>mtrx[i][j];
            }
        }
    }

    friend matrix operator *(matrix m1,matrix m2);

    void putval()
    {
        for(i=0; i<size; i++)
        {
            cout<<endl;
            for(j=0; j<size; j++)
            {
                cout<<mtrx[i][j]<<"\t";
            }
        }
    }
};

matrix operator *(matrix m1,matrix m2)
{
    matrix temp;
    temp.size=m1.size;
    for(int k; k<temp.size; k++)
    {
        for(int i=0; i<temp.size; i++)
        {
            for(j=0; j<temp.size; j++)
            {
                temp.mtrx[i][j]=m1.mtrx[k][j]*m2.mtrx[j][i];
            }
        }
    }
    return temp;
}

int main()
{
    matrix m1,m2,m3;

    m1.getval();
    m2.getval();

    m3=m1*m2;

    m3.putval();

    return 0;
}
