#include<iostream>
using namespace std;
int main()
{
    int guessnum =4;
    int guess;
    int guesscount=0;
    int guesslimit=3;
    bool outofguess=false;
    while(guessnum != guess  && !outofguess){
            if(guesscount<guesslimit)
            {
                  cout<<"ENTER THE GUESS NIO:";
          cin>>guess;
        guesscount++;

            }else{
            outofguess = true;}

    }
if(outofguess)
{

    cout<<"YOU LOSEEEE!";
}else{
    cout<<"OHH YOU WIN!!";
}
return 0;
}
