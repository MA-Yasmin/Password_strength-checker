#include <stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char pass[10];
	int upper=0,lower=0,digit=0,special=0;
	int i;
	printf("Enter the password:\n");
	scanf("%s",pass);
	for(i=0;i<strlen(pass);i++)
	{
		if(pass[i]>='A'&&pass[i]<='Z')
		{
		 upper=1;
		}
		if(pass[i]>='a'&&pass[i]<='z')
		{
			lower=1;
		}
		if(pass[i]>='0'&&pass[i]<='9')
		{
		    digit=1;
		}
		 if(!(pass[i]>='A'&&pass[i]<='Z')&& !(pass[i]>='a'&&pass[i]<='z')&& !(pass[i]>='0'&&pass[i]<='9'))
	    {
	    	special=1;
	    }
	}
	if(upper==1)
	{
		printf("\n The password contains UPPERCASE letters\n");
	}
	if(lower==1)
	{
		printf("\n The password contains LOWERCASE letters\n");
	}
	if(digit==1)
	{
			printf("\n The password contains DIGITS\n");
	}
	if(special==1)
	{
		printf("\n The password contains SPECIAL CHARACTERS");
	}
    if((upper==1)&&(lower==1)&&(digit==1)&&(special==1))
    {
    	printf("\n Your password is strong,No one can crack your password:)\n");
	}
	else if((lower==1)&&(upper==1))
	{
		printf("\n Your password's strenght is MEDIUM, you can do better");
	}
	else
	{
		printf("\n Your password's strength is WEAK\n,Try another password");
	}
}
