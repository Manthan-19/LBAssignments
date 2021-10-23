/*
1. Write Java program which accept number of rows and number of columns 
from user and display below pattern.
Input : iRow = 4 iCol = 4

Output :
	A B C D
	A B C D
	A B C D
	A B C D
*/
	import java.util.*;

	class pgm36_1
	{
		public static void main(String args[])
		{
			Marvellous mobj = new Marvellous();
			mobj.Accept();
			mobj.Display();
			mobj.Pattern();
		}
	}

	class StringPatternX
	{
		public int iRow,iCol;

		public void Accept()
		{

			Scanner sobj= new Scanner(System.in);

			System.out.println("Enter number of rows: ");
			iRow = sobj.nextInt();

			System.out.println("Enter number of columns: ");
			iCol = sobj.nextInt();
		}

		public void Display()
		{
			System.out.println("iRow : " + iRow + "\t iCol: " +iCol );
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
				for(iCnt2=1,ch='A';iCnt2<=iCol;iCnt2++,ch++)
				{
					System.out.print( ch + "\t");
				}
				System.out.println("");
			}


		}
	}