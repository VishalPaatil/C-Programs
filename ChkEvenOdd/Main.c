#include"Header.h"




int main()
{
	int iNo=0,iRet=0;
	
	printf("Enter a Number\n");
	scanf("%d",&iNo);
	
	iRet=ChkEvnod(iNo);
	
	if(iRet==0)
	{
	  printf("Given Number is Odd\n");
	}
	else
	{
	  printf("Given Number is Even\n");
	}
  
}