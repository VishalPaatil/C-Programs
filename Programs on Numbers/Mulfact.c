#include<stdio.h>
int MulFactor(int);

int MulFactor(int ino)
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
		for(i=1;i<=(ino/2);i++)
		{
			
			if((ino%i)==0)
			{
			   imul=(imul*i);
			}
			
		}
		printf("factors Multiplication of %d is %d:",ino,imul);
	}
	
	
}



int main()
{
  int iNum=0;
  printf("enter a number\n");
  scanf("%d",&iNum);
  MulFactor(iNum);
  
  return 0;
  
  
}