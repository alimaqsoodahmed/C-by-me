#include<iostream>
using namespace std;
int main()
{
  int num1,num2;
  char op;
  cout<<" ENTER !ST NO:";
  cin>>num1;
  cout<<"ENTEROPERATOR:";
  cin>>op;
  cout<<"ENTER 2nd NO:";
  cin>>num2;
int result;
if(op =='+')
{
    result=num1+num2;
}else if(op =='-')
{
    result=num1-num2;
}else if(op =='*')
{
    result =num1*num2;
}else if(op == '/')
{

    result =num1/num2;
}else{
cout<<"INVALID OPERATOR";

}


cout<<result;


return 0;
}
