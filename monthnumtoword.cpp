#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
char months[][11]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int n;
cout<<"\nEnter the month number: ";
cin>>n;
if(n>0 && n<=12)
{
cout<<"\nMonth name is: ";
puts(months[n-1]);
}
else
cout<<"\nInvalid Input";
return 0;
}
