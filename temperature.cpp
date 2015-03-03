#include <iostream>
using namespace std;
int main()
{
int F, C;
cout<<"Give me a temperature in Celsius and I'll transform to Farenheith"<<endl;
cin>>F;
C= 5*(F-32)/9;
cout<<"The temperature in Celsius is "<<C<<"°"<<endl;
if(C<=100)
{
  cout<<"At this temperature water doesn't boil"<<endl;
}
else{
cout<<"At this temperature, water would boil"<<endl;
}
}
