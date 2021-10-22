/*
5. Write a java program which accept string from user and display 
it in reverse order.
Input : "MarvellouS"
Output : "SuollevraM"

*/

import java.util.*;
class pgm31_5
{
	public static void main(String args[])
	{

		Marvellous mobj = new Marvellous();
		mobj.Accept();
		mobj.Display();
		mobj.Reverse();
		
	}
}

class StringX
{
	public String str;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string:");
		str=sobj.nextLine();
		
	}

	public void Display()
	{
		System.out.println("Entered string is :" +str);
	}
}

class Marvellous extends StringX
{

	public void Reverse()
	{
		char Arr[] = str.toCharArray();
		int iCnt=0,iStart=0,iEnd=Arr.length-1;
		char cTemp;
		
		while( iStart < iEnd)
		{
			cTemp = Arr[iStart];
			Arr [iStart] = Arr[iEnd];
			Arr [iEnd] = cTemp;

			iStart++;
			iEnd--;
		}

		String new_str = new String(Arr);
	
		System.out.println("Output :" +new_str);
	}
}