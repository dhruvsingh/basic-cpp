# include <iostream>

using namespace std;

int main()
{
int a,b,c;
cout<< "Enter two nos :"<<endl;
cout<<endl;
cout<< "Enter first no. : ";
cin>>a;
cout<< "Enter sec. no. : ";
cin>>b;
c=a*b;
while(a!=b)
{
if(a>b)
a=a-b;
else
b=b-a;
}
cout<< "HCF = " << a<<endl;
cout<< "LCM = " << c/a<<endl;
return 0;
}
