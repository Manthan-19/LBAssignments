/*
3. Write Java program which accept String from user and display 
below pattern.
Input : Hello
Output : 
		H
		H e
		H e l
		H e l l
		H e l l o
*/

import java.util.*;

class pgm38_3
{
	public static void main(String Args[])
	{
		Marvellous mobj = new Marvellous();
		mobj.Accept();
		mobj.Display();
		mobj.Pattern();
	}
}

class StringPatternX
{
	public String str;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter a string: ");
		str = sobj.nextLine();
	}

	public void Display()
	{
		System.out.println("Entered String is  " +str);
	}

}

class Marvellous extends StringPatternX
{
	public void Pattern()
	{
		int iCnt1=0,iCnt2=0,iRow=0,iCol=0;
		int iLength=0;
		iLength = str.length();
		char Arr[] = new char[iLength-1];

		Arr = str.toCharArray();
		iRow = Arr.length-1;
		iCol= Arr.length-1;
		for(iCnt1=0;iCnt1<=iRow;iCnt1++)
		{
			for(iCnt2=0;iCnt2<=iCol;iCnt2++)
			{	
				if(iCnt1>=iCnt2)
				{
					System.out.print(Arr[iCnt2] +"\t");	
				}
				
			}	
			System.out.print("\n");
		}
		
	}
}