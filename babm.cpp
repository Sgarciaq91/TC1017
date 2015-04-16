#include <iostream>
#include <cmath>
using namespace std;

double SR (double num, double guess){
            double sqrt1, sqrt2;
            do{
            sqrt1 = ((guess+(num/guess))/2);
            sqrt2 = ((sqrt1+(num/sqrt1))/2);
            guess = sqrt2;

}while (sqrt1 != sqrt2);
  return sqrt1;

}

int main ()
{
double num1, num2;

cout<<"Give me a number"<<endl;
cin>>num1;
cout<<"Guess the square root"<<endl;
cin>>num2;

cout<< "The square root is " << SR (num1,num2) <<endl;

return 0;
}
