/*
2. Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 4 iCol = 4
Output : 
	A B C D
	a b c d
	A B C D
	a b c d
*/
import java.util.*;

class pgm36_2
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
		char ch1='A',ch2='a';
		for(iCnt1=1;iCnt1<=iRow;iCnt1++)
		{
			for(iCnt2=1,ch1='A',ch2='a'; iCnt2<=iCol ; iCnt2++,ch1++,ch2++)
			{
				if((iCnt1 % 2)==0)
				{
					System.out.print(ch2 +"\t");
				}
				else
				{
					System.out.print(ch1 +"\t");
				}
			}
			System.out.println("\n");
		}
	}
}