/* print below pattern
  
  * $ $ $
  # * $ $
  # # * $
  # # # * 
*/


#include<stdio.h>
void Pattern(int,int);
void Pattern(int row,int column)
{
   int i=0,j=0;

    if(row!=column)
    {
       printf("Invalid Arguments");
       return;
     }
   
   for(i=1;i<=row;i++)
   {
	   for(j=1;j<=column;j++)
	   {
		   if(i==j)
		   {
			   printf("*\t");
		   }
          
           else if(i<j)
           {
             printf("$\t");
               
           }  
                 
          else
          {
		     printf("#\t");
	      }
          
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