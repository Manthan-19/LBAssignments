/*
2. Write a program which 2 strings from user and check whether 
contents of two strings are equal or not.

Input : "Marvellous Infosystems"
"Marvellous Infosystems"
Output : TRUE
*/

import java.util.*;
class pgm35_2
{
	public static void main(String args[])
	{
		boolean bRet = false;
		Marvellous mobj = new Marvellous();
		mobj.Accept();
		bRet = mobj.StrCmpX();
		if(bRet==true)
		{
			System.out.print("Output : TRUE" );	
		}
		else
		{
			System.out.print("Output : FAL" );
		}
	}
}

class StringX
{
	public String str1,str2;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first string:");
		str1=sobj.nextLine();
	
		System.out.println("Enter second string:");
		str2=sobj.nextLine();
		
	}
}

class Marvellous extends StringX
{

	public boolean StrCmpX()
	{
		int iCnt=0;
		boolean bAns=false;
		
		char Arr1[] = str1.toCharArray();
		
		char Arr2[] = str2.toCharArray();
		
		if(Arr1.length == Arr2.length)
		{
			for(iCnt=0;iCnt<Arr1.length;iCnt++)
			{
				if(Arr1[iCnt] != Arr2[iCnt])
				{
					bAns = false;
					break;
				}
				else
				{
					bAns = true;
				}
			}
		}
		return bAns;
	}
}