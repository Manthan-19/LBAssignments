/*
5. Write a java program which accept number of rows and number of 
columns from user and display below pattern.
Input : iRow = 4 iCol = 4

Output : 1 2 3 4 5
		 1 2     5
		 1	 3   5
		 1    4  5
		 1 2 3 4 5
*/

import java.util.*;

class pgm40_5
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
	public int iRow=0,iCol=0;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of rows: ");
		iRow = sobj.nextInt();

		System.out.println("Enter number of columns: ");
		iCol = sobj.nextInt();

	}

	public void Display()
	{
		System.out.println("iRow:  " +iRow+ "\tiCol: " +iCol);
	}

}

class Marvellous extends StringPatternX
{
	public void Pattern()
	{
		int iCnt1=0,iCnt2=0,i=1;
		for(iCnt1=1;iCnt1<=iRow+1;iCnt1++)
		{
			for(iCnt2=1;iCnt2<=iCol+1;iCnt2++)
			{
					if(iCnt1 == iCnt2)
					{
						System.out.print(iCnt2+ "\t");	
					}
					
					else if(iCnt1 == 1 || iCnt1 ==iRow+1)
					{
						System.out.print(iCnt2+ "\t");	
					}
					
					else if(iCnt2 == 1 || iCnt2 == iCol+1)
					{
						System.out.print(iCnt2+ "\t");
					}

					else
					{
						System.out.print("\t");	
					}	
			}
			System.out.println("\n");
		}
			
	}
}