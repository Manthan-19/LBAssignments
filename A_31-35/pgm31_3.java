/*
3. Write a java program which accept string from user and return 
difference between frequency of small characters and frequency 
of capital characters.

Input : "MarvellouS"
Output : 6 (8-2)

Moral:Importance of ()
*/
import java.util.*;
class pgm31_3
{
	public static void main(String args[])
	{
		int iRet = 0;
		Marvellous mobj = new Marvellous();
		mobj.Accept();
		mobj.Display();
		iRet = mobj.CountDiff();
		System.out.println("Output :" +iRet);
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

	public int CountDiff()
	{
		int iCnt=0,iSmall_Cnt=0,iCap_Cnt=0;
		
		
		char Arr[] = str.toCharArray();
		
		
		for( iCnt=0; iCnt<str.length();iCnt++)
		{
			if((Arr[iCnt]>='a') && (Arr[iCnt]<='z'))
			{
				iSmall_Cnt++;
			}
			
			else if((Arr[iCnt]>='A') && (Arr[iCnt]<='Z'))
			{
				iCap_Cnt++;
			}
		}
		 
		return (iSmall_Cnt - iCap_Cnt);
	}
}





		