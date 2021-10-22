/*
4. Accept sing from user and reverse the contents of that string 
by toggling the case.
Input : "aCBdef"
Output : "FEDcbA"
*/

import java.util.*;
class pgm35_4
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		String sRet ;
		Marvellous mobj = new Marvellous();
		mobj.Accept();

		
		sRet = mobj.StrRevTogX();
		System.out.println("Toggled string is: " +sRet);
	}
}

class StringX
{
	public String str;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a string:");
		str=sobj.nextLine();
	}
}

class Marvellous extends StringX
{

	public String StrRevTogX()
	{
		char Arr[] = str.toCharArray();
		int iCnt=0,iStart=0,iEnd=Arr.length-1;
		char cTemp;

		while(iStart < iEnd)
		{
			cTemp = Arr[iStart];
			Arr[iStart] = Arr[iEnd];
			Arr[iEnd] = cTemp;

			iStart++;
			iEnd--;
		}

		for(iCnt=0 ; iCnt < Arr.length ; iCnt++)
		{
			if(Arr[iCnt]>='a' && Arr[iCnt]<='z')
			{
				Arr[iCnt] = (char) (Arr[iCnt] - 32) ;
			}
			else if(Arr[iCnt]>='A' && Arr[iCnt]<='Z')
			{
				Arr[iCnt] = (char) (Arr[iCnt] + 32) ;
			}
		} 
		String new_str = new String(Arr);
		return new_str;
	}
}