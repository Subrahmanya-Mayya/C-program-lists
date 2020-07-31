#include<stdio.h>
 int main()
{
	int unit;
	float charge;
	char name[20];
	printf("ENTER THE NAME OF THE CUSTOMER:\t");
	scanf("%s",&name);
	printf("ENTER THE NO.OF.UNITS CONSUMED:\t");
	scanf("%d",&unit); if(unit<=200)
	{
		charge=100+unit*0.8;
	}
else if(unit<=300)
{
	charge=100+(200*0.8)+((unit-200)*(0.9));
}
else
{
	charge=100+(200*0.8)+(100*0.9)+(unit-300);
}
if(charge>400)
{
	charge=charge+(charge*0.15);
}
printf("****************************************************\n");
 printf("CUSTUMER_NAME : %s\nNO.OF.UNITS_CONSUMED : %d\nCHARGES Rs.%0.2f\n",name,unit,charge);
  printf("****************************************************\n");
}