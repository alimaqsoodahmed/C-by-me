#include<iostream>
using namespace std;
class Book{
public:
    string auther;
    string title;
    int pages;

    Book()
    {
        auther ="NO AUTHER";
        title = "NOJHSJHA";
        pages =  00;
    }

   Book(string aauther,string atitle  ,int apages)   {//constractor is call when an  object is created

     auther =aauther;
     title = atitle;
     pages = apages;
}
};



int main(){
 Book book1( "HARRY POTTER" ,  "J K ROWLLING" ,450);

 // book1.title = "jdjsdfjksfj";
 Book book2( "LORDof RIng" , "Tlokiien" , 500);
 //
  Book book3;
cout<<book3.pages;

return 0;
}


