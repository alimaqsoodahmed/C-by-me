#include<iostream>
using namespace std;
int main(){

int numbergrid [3][2] =
                     {
                    { 1,5},
                    { 7,8},
                    { 9,5}
                    };

for(int i=0;i<3;i++){    //for horizantal  outer

    for(int j=0;j<2;j++){     //for  vertical insside curly inner arry

        cout<<numbergrid[i][j]<<"  ";
    }
    cout<<endl;
}

/*lflf;ll;dfl;l;fllf
yttrytrutyut `
*/

return 0;
}
