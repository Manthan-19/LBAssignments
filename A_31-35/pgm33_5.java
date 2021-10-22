/*
5.Write a program which accept number from user and return 
difference between summation of even digits and summation of odd 
digits.
Input : 2395 
Output : -15 (2 - 17)

Input : 1018
Output : 6 (8 - 2)

Input : 8440
Output : 16 (16 - 0)

Input : 5733
Output : -18 (0 - 18)
*/
import java.util.*;
class pgm33_4
{
	public static void main(String args[])
	{

	int iRet=0;
	Scanner sobj = new Scanner(System.in);

	Marvellous mobj= new Marvellous();
	mobj.Accept();
	mobj.Display();
	iRet = mobj.CountDiff();
	
	
	System.out.println("Output: " +iRet);
	
	}

}

class DigitX
{
	public int iValue=0;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a  number:");
		iValue = sobj.nextInt();
	}

	public void Display()
	{
		System.out.println("Entered number is: " +iValue);
	}
}

class Marvellous extends DigitX
{	
	public int CountDiff()
	{
	// Logic
		int iDigit=0,ieSum=0,ioSum=0;
		while(iValue!=0)
		{
			iDigit = (iValue % 10);
			if((iDigit % 2) == 0)
			{
				ieSum = ieSum + iDigit;
			}

			else if((iDigit % 2) !=0)
			{
				ioSum = ioSum + iDigit;
			}

			iValue = iValue/10;
		}
		return (ieSum - ioSum);
	}
}



