/* print below pattern
  
   * * * *
   $ $ $ $
   * * * * 
*/


#include<stdio.h>
void Pattern(int,int);

void Pattern(int row,int column)
{
   int i=0,j=0;
    char arr[2]={'$','*'};
   for(i=1;i<=row;i++)
   {
	   for(j=1;j<=column;j++)
	   {
		  printf("%c\t",arr[i%2]);
        }
	     printf("\n");
 
    }	   
	
}


int main()
{
   int i=0,j=0;
   
   printf("Enter a Rows \n");
   scanf("%d",&i);

   printf("Enter a Column \n");
   scanf("%d",&j);

  Pattern(i,j);
  return 0;

}