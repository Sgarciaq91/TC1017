#include <iostream>
#include <cmath>
using namespace std;

int GCD(int a, int b){
  if(a==b){
    return a;
  }
  if(a > b){
    return GCD(a-b,b);
  }
  if(b>a){
    return GCD(a, b-a);
  }

}

int main ()
{
int first, second;

cout<<"This program gives you greatest common divisor"<<endl;
cout<<"Give me the first number"<<endl;
cin>>first;
cout<<"Give me the second number"<<endl;
cin>>second;

int great = GCD(first, second);

cout<<"The greatest common divisor is "<<great<<endl;

return 0;
}
