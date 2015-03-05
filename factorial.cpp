// Salvador García Quiñónez A01228980

#include <iostream>
using namespace std;
int main()
{
long long fact=1;
int num=0;
char resp;
do{
fact = 1;
cout<<"Give me a number"<<endl;
cin>>num;
for(int i=1; i<=num; i++)

{
fact=fact*i;
}
cout<<"The factorial of "<<num<<" is "<<fact<< endl;
cout<<"Do you wish to get another factorial, 'y' or 'n'"<<endl;
cin>>resp;
}while (resp=='y');
return 0;
}
