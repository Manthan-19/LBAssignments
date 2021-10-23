/*
4. Write Java program which accept number of rows and number of columns 
from user and display below pattern.
Input : iRow = 4 iCol = 5
Output : 
	4 4 4 4 4
	3 3 3 3 3
	2 2 2 2 2
	1 1 1 1 1
*/

import java.util.*;

class pgm36_4
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
		int iCnt1=0,iCnt2=0;
		for(iCnt1=iRow;iCnt1>=1;iCnt1--)
		{
			for(iCnt2=1; iCnt2<=iCol ; iCnt2++)
			{
				System.out.print( iCnt1+ "\t");
			}
			System.out.println("\n");
		}
	}
}