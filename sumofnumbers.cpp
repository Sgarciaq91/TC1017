#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
int lowran, upran, cont=0, res=0;
cout<<"This program adds numbers in sequence"<<endl;
cout<<"Give me your low range"<<endl;
cin>>lowran;
cout<<"Give me your upper range"<<endl;
cin>>upran;
lowran=res;
do{
  res=res+cont;
  cont=cont+1;

}while(cont<=upran);
cout<<"Your answer is "<<res<<endl;
}
