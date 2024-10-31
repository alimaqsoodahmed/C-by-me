#include<iostream>
using namespace std;

string getday(int daynum)
{
      string dayname;
      switch(daynum){
    case 0:
        dayname = "monday";
        break;

    case 1:
        dayname = "Tuesday";
        break;

    case 2:
      dayname  = "Wednesday";
        break;

    case 3:
       dayname = "THursday";
        break;

    case 4:
        dayname  = "Friday";
        break;

    case 5:
        dayname  = "saturday";
        break;

    case 6:
        dayname  = "Sunday";
        break;

    default:
       dayname = "INVALID DAYT NAME";
      }

  return dayname;

}


int main()
{

cout<<getday(78);

return 0;
}
