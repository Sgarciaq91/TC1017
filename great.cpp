#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a,int b){
  if(a==b){
  return a;
}

  if (a>b){
  return gcd(a-b,b);
}

  if(b>a){
  return gcd(a,b-a);
}
}

int main (){

int first, second;

cout<<"This program gives you the greatest common divisor of two integers given"<<endl;
cout<<"Give me your first parameter"<<endl;
cin>>first;
cout<<"Give me your second parameter"<<endl;
cin>>second;

int great = gcd(first, second);

cout<<"The greatest common divisor is "<<gcd<<endl;

return 0;
}
