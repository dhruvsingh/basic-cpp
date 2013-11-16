#include<iostream>

using namespace std;

int main()
{
int num,fact=1;
cout<<"\nEnter the number to calculate factorial: ";
cin>>num;
if(num==0)
cout<<"\nFactorial of 0 is 1";
else
{
 for(int i=num; i>0;i--)
  fact*=i;
cout<<"\nFactorial of "<<num<<" is : "<<fact;
}
return 0;
}
