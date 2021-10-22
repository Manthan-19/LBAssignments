/*
5. Accept string from user and check whether the string is 
palindrome or not without considering its case.
Input : "1abccBA1"
Output : TRUE
*/

import java.util.*;

class pgm35_5
{
	public static void main(String args[])
	{
		boolean bRet=false;

		Marvellous mobj = new Marvellous();
		mobj.Accept();
		mobj.Display();
		bRet = mobj.StrPallindrome();

		if(bRet == true)
		{
			System.out.println("String is pallindrome.");
		}
		else
		{
			System.out.println("String is not a pallindrome.");
		}
	}
} 

class StringX
{
	public String str;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter a string:");
		str = sobj.nextLine();
	}

	public void Display()
	{
		System.out.println("Entered string is:" +str);
	}
}

class Marvellous extends StringX
{
	public boolean StrPallindrome()
	{
		char Arr[] = str.toCharArray();
		boolean bAns = true;
		boolean bReturn= false;
		int iCnt=0,iStart=0,iEnd=Arr.length-1;
		char cTemp=0;
		
		/*while(iStart < iEnd)
		{
			cTemp = Arr[iStart];
			Arr[iStart] = Arr[iEnd];
			Arr[iEnd] = cTemp;
			iStart++;
			iEnd--;
		}
		char Brr[] = new char[Arr.length]*/

		for(iCnt=iStart;iCnt<iEnd;iCnt++)
		{
			if((Arr[iCnt] >='a') || (Arr[iCnt] >='z') ||(Arr[iCnt] >='A') ||(Arr[iCnt] >='Z'))
			{
				cTemp = Arr[iStart];
				Arr[iStart] = Arr[iEnd];
				Arr[iEnd] = cTemp;
			}
		}
		String new_str = new String(Arr);
		/*if(str != new_str)
		{
			bAns = false;
		}*/
		if(bAns == new_str.equals(str))
		{
			bReturn = true;
		}
		else
		{
			bReturn = false;
		}
		
		return bReturn;
	}

}