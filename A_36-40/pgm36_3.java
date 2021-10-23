/*
3. Write Java program which accept number of rows and number of columns 
from user and display below pattern.
Input : iRow = 3 iCol = 5
Output : 
		A A A A A
		B B B B B
		C C C C C
*/

import java.util.*;

class pgm36_3
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
		char ch='A';
		for(iCnt1=1;iCnt1<=iRow;iCnt1++)
		{
			for(iCnt2=1; iCnt2<=iCol ; iCnt2++)
			{
				System.out.print(ch + "\t");
			}
			System.out.println("\n");
			ch++;
		}
	}
}