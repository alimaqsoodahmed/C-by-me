#include<iostream>
using namespace std;


void sayhi(string name,int age);     //declare it and call in maina and define bl;ow
int main()
{
cout<<"TOP\n\n";
sayhi("ALI",25);

sayhi("hza",100);
sayhi("tom",45);


return 0;
}
void sayhi(string name,int age){    //give parmetrer
cout<<"HELLOUSAR\t\t"<<name<<"\n\nAGE IS:\n\n"<<age;

}
