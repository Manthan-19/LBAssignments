/*
1. Write a java program which accepts 2 strings from user and 
concat N characters of second string after first string.Value of N 
should be accepted from user.
Note : If third parameter is greater than the size of second string 
then concat whole string after first string.
Input : "Marvellous Infosystems"
		"Logic Building"
5
Output : "Marvellous Infosystems Logic"
*/

import java.util.*;
class pgm35_1
{
	public static void main(String args[])
	{
		String sRet;
		Marvellous mobj = new Marvellous();
		mobj.Accept();
		sRet = mobj.StrNCatX();
		System.out.print("Output : " +sRet);
	}
}

class StringX
{
	public String str_src,str_dest;
	public int iNo;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter source string:");
		str_src=sobj.nextLine();
	
		System.out.println("Enter destination string:");
		str_dest=sobj.nextLine();

		System.out.println("Enter number of elements:");
		iNo = sobj.nextInt();
	}
}

class Marvellous extends StringX
{

	public String StrNCatX()
	{
		int iCnt=0;
		if(iNo > str_dest.length())
		{
			iNo = str_dest.length(); 
		}
		char Arr[] = str_dest.toCharArray();
		
		char Ans[] = new char[iNo];
		
		
		for(iCnt=0 ; iCnt < Ans.length ; iCnt++)
		{
			Ans[iCnt] = Arr[iCnt];
		}
		String new_str= new String(Ans);
		
		
		String Result = str_src + " "+new_str;
		return Result; 
	}
}