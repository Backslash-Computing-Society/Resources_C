#include<stdio.h>
int main()
{
	printf("NAME: VANSHAJ RAGHUVANSHI\nROLL/APP. NO.: 29128\n");
	printf("ELECTRICITY BILL\n\n");
	int uid;
	const float f=50;
	float unit;
	char name[50];
	printf("Enter the user id of user:\n");
	scanf("%d",&uid);
	printf("Enter the name of user:\n");
	scanf("%s",&name);
	printf("Enter the number of units consumed by user:\n");
	scanf("%f",&unit);
	float charge;
	if(unit>0&&unit<=100)
	{
		charge=unit*1;
		if(charge<50)
		{
			charge=f;
		}
	}
	else if(unit>100&&unit<=300)
	{
		charge=unit*2;
	}
	else
	{
		charge=unit*3;
	}
	if(charge>1000)
	{
		charge=charge+(0.15*charge);
	}
	printf("Charge deatils\n%d %s %.2f",uid,name,charge);
}
