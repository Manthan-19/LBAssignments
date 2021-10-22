/*
1. Write java program which accept N numbers from user and accept 
one another number as NO , check whether NO is present or not.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : TRUE

Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : FALSE
*/

import java.util.*;

class pgm34_1
{
	public static void main(String args[])
	{
		
		boolean bRet = false;


		Marvellous mobj = new Marvellous();
		mobj.Accept();
		mobj.Display();
		bRet = mobj.Check();

		System.out.print("Output : ");
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

class NumberX
{
	public int Arr[];
	public int iValue=0,iNumber=0;
	

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		int iCnt = 0;

		System.out.println("Enter number of elements: ");
		iValue = sobj.nextInt();

		Arr = new int[iValue];

		System.out.println("Enter number : ");
		iNumber = sobj.nextInt();
		
		System.out.println("Enter elements");
		
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}

	public void Display()
	{
		int iCnt=0;
		System.out.println("Entered elements are: ");
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt] +"\t");
		}
	}
	

}

class Marvellous extends NumberX
{
	
	public boolean Check()
	{
		// Logic
		int i=0;
		boolean bAns=false;
		
		for(i=0 ; i<Arr.length ; i++)
		{
			if(Arr[i] == iNumber)
			{
				bAns = true;
			}
		}
		return bAns;
	}
}