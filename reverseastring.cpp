    #include<iostream>
    #include<string.h>
    #include<stdio.h>
    
    using namespace std;
    
    int main()
    {
    char string[10],temp;
    int len;
    cout<<"\nEnter the string : ";
    gets(string);
    len= strlen(string);
    cout<<"\nThe string you entered is : "<<string;
    cout<<"\n\nLength of string is: "<<len;
    for(int i=0;i<len/2;i++)
    {
      temp=string[i];
      string[i]=string[len-i-1];
      string[len-i-1]=temp;
    }
    cout<<"\nThe reversed string is: "<<string;
    getchar();
    return 0;
    }
