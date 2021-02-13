#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int fd=0,ret=0;  
    char arr[]="marvellous";
	char brr[20]; 
	
	fd=creat("marvellous.txt",0x777);
	if(fd == -1)
	{
		printf("unbale to create file\n");
		
	}
	else
	{
		printf("file created sucessfully with file discriptor %d\n",fd);
		
	}
	
	fd=open("marvellous.txt",O_RDWR);
	if(fd == -1)
	{
		printf("unbale to open file\n");
		
	}
	else
	{
		printf("file open sucessfully\n");
		
	}
	
	ret=write(fd,arr,10);
	if(ret==0)
	{
		printf("unable to write data\n");
		
	}
	
	lseek(fd,0,SEEK_SET);
	
	ret=read(fd,brr,10);
	printf("data is %s\n",brr);
		
	close(fd);
	return 0;
	
}