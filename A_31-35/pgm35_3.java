/*
3. Write a program which 2 strings from user and check whether 
first N contents of two strings are equal or not.
Note : If third parameter is greater than the size of second string 
then concat whole string after first string.
Input :"Marvellous Infosystems" 
"Marvellous Logic Building"
10
Output : TRUE
*/

import java.util.*;
class pgm35_3
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		boolean bRet = false;
		Marvellous mobj = new Marvellous();
		mobj.Accept();

		int iNo;

		System.out.println("Enter number of elements:");
		iNo = sobj.nextInt();
		
		bRet = mobj.StrNCmpX(iNo);
		if(bRet==true)
		{
			System.out.print("Output : TRUE" );	
		}
		else
		{
			System.out.print("Output : FALSE" );
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

	public boolean StrNCmpX(int iNo)
	{
		//int iCnt1=0,iCnt2=0;
		int iCnt =0;
		boolean bAns = true;
		if(iNo > str2.length())
		{
			iNo = str2.length(); 
		}
		else if(iNo > str1.length())
		{
			iNo = str1.length();
		}

		char Arr1[] = str1.toCharArray();
		
		char Arr2[] = str2.toCharArray();

		
		for(iCnt=0 ; iCnt < iNo ; iCnt++)
		{
			if(Arr1[iCnt] != Arr2[iCnt])
			{
				bAns = false;
			}
		}
		return bAns; 
	}
}