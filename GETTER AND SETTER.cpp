#include<iostream>
using namespace std;

class Movie {
private:
    string rating;

public:
    string title;
    string  director;

    Movie(string atitle , string adirector ,string aRating)
    {
         title = atitle;
         director  = adirector;
         setRating(aRating);

    }
    void setRating(string aRating )
    {

       if(aRating=="G" || aRating =="PG" || aRating =="PG-13" || aRating =="hara"){

        rating =aRating;
       }else
       {

           rating ="NR";


       }

    }
   string getRating(){
      return rating;

   }

};

    int main()
    {


        Movie avenger("THE AVWNGERS","J K ROWLING" ,"AB_12");
        avenger.setRating("PGH");

        cout<<avenger.getRating();




        return 0;
    }
