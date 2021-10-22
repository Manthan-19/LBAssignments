/*
4. Write java program which accept N numbers from user and accept 
Range, Display all elements from that range

Input : N : 6
Start: 60
End : 90
Elements :85 66 3 76 93 88
Output : 66 76 88

Input : N : 6
Start: 30
End : 50
Elements :85 66 3 76 93 88
Output :
*/

import java.util.*;

class pgm34_3
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		Marvellous mobj = new Marvellous();

		mobj.Accept();
		mobj.Display();

		mobj.DisplaySum();
		
	}
}

class NumberX
{
	public int Arr[];
	public int iValue=0;
	

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
	
	public void DisplaySum()
	{
		// Logic
		Scanner sobj = new Scanner(System.in);
		int i=0;
		int iNum=0;
		int iStart=0,iEnd=0;
		
		System.out.println("Start: ");
		iStart = sobj.nextInt();

		System.out.println("End: ");
		iEnd = sobj.nextInt();

		for(i=0 ; i<Arr.length ; i++)
		{
			if((Arr[i]>=iStart) && (Arr[i]<=iEnd))
			{
				iNum = Arr[i];
				System.out.print(iNum +"\t");
			}
			
		}
	}
}




