#include <iostream>
using namespace std;

class B{
    int a;
    public:
    int b;
    void set_ab(void);
    int get_a(void);
    void show_a(void);
};

class D : public B{
    int c;
    public:
    void mul(void);
    void display();
};
int B:: get_a(void){
    return a;
}
void B :: set_ab(void){
    cin>>a>>b;
}

void B :: show_a(void){
    cout<<"a="<<a<<endl;
}

void D :: mul(){
    c = b * get_a();
}

void D :: display(){
    cout<<"a="<<get_a()<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
}

int main() {
	// your code goes here
	D d;
	
	d.set_ab();
	d.mul();
	d.show_a();
	d.display();
	d.b=20;
	d.mul();
	d.display();
	return 0;
}
