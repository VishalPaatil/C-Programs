#include<stdio.h>
int PrintEven(int iNo)
{
	int i=0;
 if(iNo <= 0)
 {
    return 0;
 }
 else
 {
	 for(i=1;i<=(iNo*2);i++)
	 {
		if((i%2)==0)
		{
			printf("%d\t",i);
		}			
	 }
	 
 }

}
int main()
{
int iValue = 0;
printf("Enter number\n");
scanf("%d",&iValue);
PrintEven(iValue);
return 0;
}