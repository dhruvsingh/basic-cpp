#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int num,rem;
	printf("\nEnter the number: ");
	scanf("%d",&num);
	if(num==0)
	{
		printf("\nZero");
		goto end;
	}
	if(num<10)
	 switch(num)
	{
		case 1:printf("One");
			   goto end;
		case 2:printf("Two");
			   goto end;
		case 3:printf("Three");
			   goto end;
		case 4:printf("Four");
			   goto end;
		case 5:printf("Five");
			   goto end;
		case 6:printf("Six");
			   goto end;
		case 7:printf("Seven");
			   goto end;
		case 8:printf("Eight");
			   goto end;
		case 9:printf("Nine");
			   goto end;
	}
	else
		switch(num)
		{
			case 10:printf("\nTen");
					break;
			case 11:printf("\nEleven");
					goto end;
			case 12:printf("\nTwelve");
					goto end;
			case 13:printf("\nThirteen");
					goto end;
			case 14:printf("\nFourteen");
					goto end;
			case 15:printf("\nFifteen");
					goto end;
			case 16:printf("\nSixteen");
					goto end;
			case 17:printf("\nSeventeen");
					goto end;
			case 18:printf("\nEighteen");
					goto end;
			case 19:printf("\nNineteen");
					goto end;
		}
	rem=num%10;
	num-=rem;
	switch(num)
	{
		case 20:printf("\nTwenty");
				goto less10;
		case 30:printf("\nThirty");
				goto less10;
		case 40:printf("\nForty");
				goto less10;
		case 50:printf("\nFifty");
				goto less10;
		case 60:printf("\nSixty");
				goto less10;
		case 70:printf("\nSeventy");
				goto less10;
		case 80:printf("\nEighty");
				goto less10;
		case 90:printf("\nNinety");
				goto less10;
		case 100:printf("\nHundred");
				 exit(0);
	}
	less10:
	switch(rem)
	{
		case 1:printf("One");
			   break;
		case 2:printf("Two");
			   break;
		case 3:printf("Three");
			   break;
		case 4:printf("Four");
			   break;
		case 5:printf("Five");
			   break;
		case 6:printf("Six");
			   break;
		case 7:printf("Seven");
			   break;
		case 8:printf("Eight");
			   break;
		case 9:printf("Nine");
			   break;
	}
	end:
	getchar();
}
