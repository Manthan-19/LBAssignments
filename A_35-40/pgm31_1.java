/*
1.Write a Java program which accept string from user and count 
number of capital characters.
#Input : "Marvellous Multi OS"
#Output : 4

*/
import java.util.*;
class pgm31_2
{
	public static void main(String args[])
	{
		int iRet = 0;
		Marvellous mobj = new Marvellous();
		mobj.Accept();
		mobj.Display();
		iRet = mobj.CountCapital();
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

	public int CountCapital()
	{
		int iCnt=0;
		
		
		char Arr[] = str.toCharArray();
		
		
		for(int i=0; i < str.length() ; i++)
		{
			if(Arr[i]>='A' && Arr[i]<='Z')
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

