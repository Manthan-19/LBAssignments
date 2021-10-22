/*
4.Write a program which accept number from user and return 
multiplication of all digits.

Input : 2395 
Output : 270

Input : 1018
Output : 8

Input : 9440
Output : 144

Input : 922432
Output : 864
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
	iRet = mobj.Multiply();
	
	
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
	public int Multiply()
	{
	// Logic
		int iDigit=0,iMult=1;
		while(iValue!=0)
		{
			iDigit = (iValue % 10);
			if(iDigit>0)
			{
				iMult = iMult*iDigit;	
			}
			iValue = iValue/10;
		}
		return iMult;
	}
}

