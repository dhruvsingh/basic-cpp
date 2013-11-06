#include<iostream>
#include<string.h>
#include<windows.h>

using namespace std;

int main()
{
char input[100],conso[100];
int len,i=0,j=0;
printf("\nEnter the input string: ");
scanf("%s",input);
len=strlen(input);
printf("\nThe length of string is: %d",len);
for(i=0,j=0;i<len;i++)        
if((input[i]=='\0') || (input[i+1]=='\0') || (input[i+2]=='\0'))
 break;
else
{
 switch(input[i])
 {
	case 'a':conso[j]=input[i+2];
			 j++;
			 break;
	case 'e':conso[j]=input[i+2];
			 j++;
			 break;
	case 'i':conso[j]=input[i+2];
			 j++;
			 break;
	case 'o':conso[j]=input[i+2];
			 j++;
			 break;
	case 'u':conso[j]=input[i+2];
			 j++;
			 break;
 }
}
printf("\nThe input was : %s",input);
if(j==0 && i==0)
 printf("\nInput very small");
else
 if(j==0)
  printf("\nNo output");
else
 printf("\nThe required array is : %s",conso);
return 0;
}
