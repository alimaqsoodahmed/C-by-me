#include<iostream>
using namespace std;
int main(){
string phrase =    "GRAFFE ACCADEMY";
phrase [13] ='q'; //0123456789ABCDE

cout<<phrase<<endl;

cout<<phrase.find("ACCADEMY",0 )<<endl;//PASING ARGIUMENT+find chra or string using find func..
string phrasesub;
phrasesub = phrase.substr(8 ,3);

cout<<phrasesub;
   return 0;
}
