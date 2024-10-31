#include<iostream>
using namespace std;

class Chef
{
public:
 void makechicken(){

   cout<<"THE CHEF CAN MAKE CHICKEN\n\n";

}
 void makesalad(){
cout<<"THE CHEF CAN MAKE saladn\n\n";
}
  void makespecial()
{
cout<<"THE CHEF CAN MAKE  SPECIAL: DISH\n\n";

}
};
class italianchef  :public Chef{
public:

void makepasta()
{



    cout<<"THED CHEF MAKE PASTA \nb\n\n";
}
void makespecial()
{
cout<<"THE CHEF CAN MAKE  SPECIAL: adssaassa DISH\n\n";

}

};
int main()
{


    Chef chef1;
    chef1.makespecial();

    italianchef itallianchef1;
    itallianchef1.makespecial();

    return 0;

}
