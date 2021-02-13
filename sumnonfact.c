#include<stdio.h>
int MulFactor(int);

int sumnonFactor(int ino)
{
	int i=0,isum=0;
	if(ino==0)
	{
		return 0;
	}
	if(ino==1)
	{
		printf("1");
	}
	else
	{
		for(i=1;i<ino;i++)
		{
			
			if((ino%i)!=0)
			{
			  isum=isum+i;
			}
			
		}
	
       printf("%d\t",isum);	
	}
	
	
}



int main()
{
  int iNum=0;
  printf("enter a number\n");
  scanf("%d",&iNum);
  sumnonFactor(iNum);
  
  return 0;
  
  
}