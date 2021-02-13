#include<stdio.h>
void Swap(int val1,int val2)
{
    val1=val1+val2;
	val2=val1-val2;
    val1=val1-val2;  	

  printf("Swaped Numbers Are %d %d",val1,val2);
}

int main()
{
  int no1=0,no2=0; 
  printf("Enter a Number 1St\n");
  scanf("%d",&no1);
  printf("Enter a Number 2nd\n");
  scanf("%d",&no2);
  Swap(no1,no2);
  return 0;
}