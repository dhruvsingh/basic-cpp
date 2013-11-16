#include<iostream>

using namespace std;

int factorial(int num)
{
 int fact;
 fact=num*factorial(num-1);
 return fact;
}
int main()
{
int num,fact=1;
cout<<"\nEnter the number to calculate factorial: ";
cin>>num;
if(num==0)
{
 cout<<"\nFactorial of 0 is 1"; 
 exit(0);
}
else
{
 fact=factorial(num);
 cout<<"\nFactorial of "<<num<<" is : "<<fact;
}
return 0;
}
