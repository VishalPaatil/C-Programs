#include<stdio.h>
int MulFactor(int);

int sumdiffnonFactor(int ino)
{
	int i=0,isum1=0,isum2=0,isum3=0;
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
			  isum1=(isum1+i);
			}
			else if((ino%i)==0)
			{
			  isum2=(isum2+i);
			}
			
		}
	    isum3=(isum2-isum1);
       printf("%d\t",isum3);	
	}
	
	
}



int main()
{
  int iNum=0;
  printf("enter a number\n");
  scanf("%d",&iNum);
  sumdiffnonFactor(iNum);
  
  return 0;
  
  
}