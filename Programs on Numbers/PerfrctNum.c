#include<stdio.h>
int Perfect(int);

int Perfect(int ino)
{
	int i=0,iSum=1;
	if(ino<0)
	{
		ino=-ino;
	}
	if(ino==1||ino==0)
	{
		return 0;
	}
	else
	{
		for(i=ino/2;i>=2;i--)
		{
			
			   if((ino%i)==0)
			   {
				 iSum=iSum+i;//14+7+4+2
			   }
			   if(iSum>ino)
			   {
				   break;
			   }
			
			
		}
		if(iSum==ino)
		{
			printf("%d Number is Perfect",ino);	
        }
		 else
		 {
			printf("%d Number is Not Perfect",ino);	
         }
		
	}
	
	
}



int main()
{
  int iNum=0;
  printf("enter a number\n");
  scanf("%d",&iNum);
  Perfect(iNum);
  
  return 0;
  
  
}