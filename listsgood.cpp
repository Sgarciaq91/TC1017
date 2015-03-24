#include <iostream>
#include <cmath>
using namespace std;
int main()

{
int size, count=0;
float num, sum=0, var=0, ave, dev, varia;

cout<<"How many numbers are you going to give me?"<<endl;
cin >>size;
float array[size];

for(int i=0; i<size; i++){
    cout<<"Give me the number to put on the list "<<i+1<<"°:"<<endl;
  cin>>num;
  array[i] = num;
  sum=sum+num;
}
ave = sum/size;

for (int i=0; i<size; i++){
  count = count +1;
  cout<<"The numbers you gave me are "<<array[i]<<endl;
}

cout<<"The sum of your numbers is "<<sum<<endl;
cout<<"The average of your numbers is "<<ave<<endl;

for(int i=(size-1); i>=0; --i){
  var = ((array[i]-ave)*(array[i]-ave)+var);
}
varia=var/size;
dev= sqrt(varia);

cout<<"The standard deviation of your numbers is "<<dev<<endl;


return 0;
}
