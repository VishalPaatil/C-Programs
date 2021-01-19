#include"Header.h"

/////////////////////////////////////////////////////////////////////
//Function Name :ChkEvnod
//Parameters    :Integer
//Retrun Type   :Integer
//Description   :Check the given Number is Odd or Even
//Author        :vishal patil
//Date          :12 jan 2021
/////////////////////////////////////////////////////////////////////


BOOL ChkEvnod(int iNum)
{
 	int iResult=0;
	iResult=iNum%2;
	
	if(iResult==0)
    {
		return TRUE;
	}	
	else
	{
		return FALSE;
	}
}
