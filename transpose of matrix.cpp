#include<iostream>
using namespace std;

class matrix
{
    int m[3][3];

public:
    void read()
    {
        cout<<"Enter elements of matrix";
        int i,j;

        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                //cout<<i<<j<<"   \n";
                cin>>m[i][j];
            }
        }
    }

    void display()
    {
        int i,j;

        for(i=0; i<3; i++)
        {
            cout<<"\n";
            for(j=0; j<3; j++)
            {
                cout<<m[i][j]<<"\t";
            }
        }
    }

    friend matrix transpose(matrix);
};

matrix transpose(matrix m1)
{
    int i,j;
    matrix m2;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            m2.m[i][j]=m1.m[j][i];
        }
    }

    return (m2);
}

int main()
{
    matrix mt1,mt2;

    mt1.read();

    cout<<"Input is \n";

    mt1.display();

    mt2=transpose(mt1);

    cout<<"\n transporse is \n";

    mt2.display();

    return 0;
}
