/*
1.Write a java program which accept number from user and return the 
count of even digits.

Input : 2395 
Output : 1

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 4
*/

import java.util.*;
class pgm33_1
{
	public static void main(String args[])
	{

	int iRet=0;
	Scanner sobj = new Scanner(System.in);

	Marvellous mobj= new Marvellous();
	mobj.Accept();
	mobj.Display();
	iRet = mobj.CountEven();
	//Digit dobj = new Digit();
	
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
	public int CountEven()
	{
	// Logic
		int iDigit=0,iCnt=0;
		while(iValue!=0)
		{
			iDigit = (iValue % 10);
			if(iDigit % 2 == 0)
			{
				iCnt++;
			}

			iValue = iValue/10;
		}
		return iCnt;
	}
}