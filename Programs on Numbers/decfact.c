#include<stdio.h>
int MulFactor(int);

int decFactor(int ino)
{
	int i=0,imul=1;
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
		for(i=(ino/2);i>=2;i--)
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
  decFactor(iNum);
  
  return 0;
  
  
}