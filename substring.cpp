        #include<iostream>
        #include<string.h>
        #include<stdio.h>
        
        using namespace std;
        
        int main()
        {
        char string[10],substr[10],str1[10];
        int len,lensub,i,j,k,flag=1;
        cout<<"\nEnter the string : ";
        cin>>string;
        cout<<"\nEnter the sub-string : ";
        cin>>substr;
        len= strlen(string);
    	lensub= strlen(substr);
        for(i=0;i<len;)
        {
	        for(k=0,j=i;k<lensub;j++,k++)
		   str1[k]=string[j];
    	    str1[k]='\0';
    		if((strcmp(substr,str1))==0)
    		{
    		 cout<<"\n\nSubstring found at location :"<<i+1;
             flag=0;
    		 break;
    		}
    		else
    		 i++;
    	}
        if(flag!=0)
        cout<<"\n\nSub-string not found!";
		getchar();
        return 0;
        }
