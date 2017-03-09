#include<iostream>
#include<string.h>
using namespace std;

class inventory{
string title;
string aurthor,publisher;
int price,stock;

public:
void getdata(){
cout<<"Enter Title,Aurthor,publisher,price,stock"<<endl;
cin>>title>>aurthor>>publisher>>price>>stock;
}

int check(string name){
int cmp=1;
//cout<<(strcmp(name,title)-'1');
//cout<<cmp;

if(name==title){
cmp = 0;
}
if(cmp){
cout<<"\njadsg\n"<<title<<endl;
return 1;
}
else{
return 0;
}
}


void display(){
cout<<"Title\t"<<title<<endl;
cout<<"Aurtor\t"<<aurthor<<endl;
cout<<"Publisher\t"<<publisher<<endl;
cout<<"Price\t"<<price<<endl;
cout<<"Stock\t"<<stock<<endl;
}
};

int main(){
inventory book[100];
int no,i;
string name;

cout<<"Enter Number of books to enter"<<endl;
cin>>no;

for(i=0;i<no;i++){
book[i].getdata();
}

cout<<"Enter Name of book to Display"<<endl;
cin>>name;

for(i=0;i<100;i++)
{
if(book[i].check(name))break;
}

book[i].display();
}
