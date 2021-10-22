/*
4. Write a java program which accept string from user and check 
whether it contains vowels in it or not.

Input : "marvellous"
Output : TRUE

Input : "Demo"
Output : TRUE

Input : "xyz"
Output : FALSE
*/
import java.util.*;
class pgm31_4
{
	public static void main(String args[])
	{
		boolean bRet = false;
		Marvellous mobj = new Marvellous();
		mobj.Accept();
		mobj.Display();
		bRet = mobj.CheckVowel();
		if(bRet == true)
		{
			System.out.println("TRUE");
		}
		else
		{
			System.out.println("FALSE");
		}
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

	public boolean CheckVowel()
	{
		boolean bAns=false;
		int iCnt=0;
		char Arr[] = str.toCharArray();
	
	for( iCnt=0;iCnt<str.length();iCnt++)
		{
			if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'A') || (Arr[iCnt] == 'e') ||(Arr[iCnt] == 'E') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'O') || (Arr[iCnt] == 'u') || (Arr[iCnt] == 'U'))
			{
				bAns = true;
			}
		}

		return bAns;
	}
}



