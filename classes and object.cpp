#include<iostream>
using namespace std;
class Book{
public:
    string auther;
    string title;
    int pages;


};



int main(){
 Book book1;
 book1.title= "HARRY POTTER";
 book1.auther ="J K ROWLLING";
 book1.pages =450;

 Book book2;
 book2.title= "LORDof RIng";
 book2.auther ="Tlokiien";
 book1.pages =500;


  cout<<book2.title;

return 0;
}
