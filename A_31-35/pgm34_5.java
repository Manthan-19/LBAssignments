/*
5. Write java program which accept N numbers from user and return 
product of all odd elements.

Input : N : 6
Elements :15 66 3 70 10 88
Output : 45

Input : N : 6
Elements :44 66 72 70 10 88
Output : 0

*/

import java.util.*;

class pgm34_5
{
	public static void main(String args[])
	{
		
		int iRet = 0;

		Marvellous mobj = new Marvellous();
		mobj.Accept();
		mobj.Display();
		iRet = mobj.Product();

		System.out.print("Output : "+iRet);
		
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
	
	public int Product()
	{
		// Logic
		int i=0,ioMult=1;
		boolean bAns=false;
		
		for(i=0 ; i<Arr.length ; i++)
		{
			if(((Arr[i] % 2) != 0))
			{
				ioMult = ioMult * Arr[i];
			}
			
		}
		return ioMult;
	}
}


