#include<iostream>
using namespace std;

class Student {
public:
    string name;
    string  major;
    double  gpa;
      Student(string aName,string aMajor ,double aGpa)  {

     name = aName;
     major = aMajor;
     gpa = aGpa;
      }
 bool hashonor(){

     if(gpa>=3.5)
 {
     return true;
 }else{

   return false;
 }
 }
};



int main()
   {
      Student student1( "ALI" ,"AI" , 3.3);

      Student student2( "HAMZA" ,"DS" , 3.7);

 cout<<student1.hashonor();

return 0;
}


