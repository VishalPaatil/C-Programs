#include<stdio.h>
int Factor(int);

int Factor(int ino)
{
	int i=0;
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
		printf("Factors of %d are \n",ino);
		for(i=1;i<=(ino/2);i++)
		{
			
			if((ino%i)==0)
			{
				printf("%d\t",i);
			}
			
		}
		
	}
	
	
}



int main()
{
  int iNum=0;
  printf("enter a number\n");
  scanf("%d",&iNum);
  Factor(iNum);
  
  return 0;
  
  
}