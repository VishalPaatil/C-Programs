/* print below pattern
  
    1 2 3
	1 2 3
    1 2 3
    1 2 3 
*/


#include<stdio.h>
void Pattern(int,int);
void Pattern(int row,int column)
{
   int i=0,j=0;

   
   for(i=1;i<=row;i++)
   {
	   for(j=1;j<=column;j++)
	   {
		  printf("%d\t",j);
          
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
   printf("Pattern \n"); 

  Pattern(i,j);
  return 0;

}