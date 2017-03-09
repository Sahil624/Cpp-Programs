#include<string.h>
#include <iostream>
using namespace std;

class student
    {
  protected:

    int roll;
    string name;

    public:

	student(){
		roll=0;
		name='xxx';
	}

    student(int rolla,string namea)
    {
        roll=rolla;
        name=namea;
    }

};

class academics:virtual public student
    {
    protected:
    int marks;
    string grade;

    public:

    academics(int marksa)
	
    {
        marks=marksa;
        //cout<<"Marks----->"<<marks<<endl;
        if (marks>=90){
        grade="A";
        }

        else if (marks<90 && marks>=75){
        grade="B";
        }

        else if (marks<75&&marks>=60){
        grade="C";
        }

        else if (marks<60&&marks>=45){
        grade="D";
        }
        
        else{
        	grade = "F";
		}
        
    }
};

class accounts : virtual public student
    {
    protected:
    int fee;
    int dues;

    public:

    accounts(int feea,int duesa)
    {
    fee=feea;
    dues=duesa;
    }
};

class guardian:public academics, public accounts
    {
    public:
    guardian(int rolla, string namea,int marksa,int feea,int duesa):
    academics(marksa),accounts(feea,duesa),	student(rolla,namea)
    {

    }
    void show(){
        cout<<roll<<endl;
        cout<<name<<endl;
        cout<<marks<<endl;
        cout<<grade<<endl;
        cout<<fee<<endl;
        cout<<dues<<endl;


    }
};
int main() {
    int a,b,c,d;
    string n,g;
    cin>>a>>n>>b>>d>>c;
    guardian G(a,n,b,d,c);
    G.show();
    return 0;
}
