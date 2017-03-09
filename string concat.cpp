#include<iostream>
#include<string.h>
using namespace std;

class String{
char *name;
int length;

public:

String(){
length=0;
name = new char[length++];}

String(char *s){
length = strlen(s);
name=new char(length++);
strcpy(name,s);
}

void display(){
cout<<name<<endl;
}
void join(String &,String &);
};

void String :: join(String &a,String &b){
length =a.length+b.length;
delete name;

name=new char[length+1];

strcpy(name,a.name);
strcmp(name,b.name);
}


int main(){
char *first="object";
String name1(first),name2("oriented"),name3("Programming"),s1,s2;
s1.join(name1,name2);
s2.join(s1,name3);

name1.display();
name2.display();
name3.display();

s1.display();
s2.display();
}
