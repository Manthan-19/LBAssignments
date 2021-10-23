/*
3. Write Java program which accept number of rows and number of 
columns from user and display below pattern.
Input : iRow = 3 iCol = 5
Output : 
	5 4 3 2 1
	5 4 3 2 1
	5 4 3 2 1
*/

import java.util.*;

class pgm37_3
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
		for(iCnt1=1;iCnt1<=iRow;iCnt1++)
		{
			for(iCnt2=iCol;iCnt2>=1;iCnt2--)
			{
				System.out.print(iCnt2 + "\t");
			}
			System.out.println("\n");
			
		}
	}
}