/*
1. Write Java program which accept N numbers from user and return 
difference between summation of even elements and summation of 
odd elements.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 53 (234 - 181)
*/
import java.util.*;


class pgm32_1
{
	public static void main(String args[])
	{
		int iNo=0,iRet=0;
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter number of elements:");
		iNo = sobj.nextInt();

		Marvellous mobj = new Marvellous(iNo);
		mobj.Accept();
		mobj.Display();
		iRet = mobj.Difference();
		System.out.println("Difference is: "+iRet);
	}
}

class ArrayX
{
	public int Arr[];

	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
	}

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		int iCnt = 0;
		System.out.println("Enter elements");
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}

	public void Display()
	{
		int iCnt = 0;
		System.out.println("Elements are : ");
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
}

class Marvellous extends ArrayX
{
	public Marvellous(int iValue)
	{
		super(iValue);
	}

	public int Difference()
	{
		int ieSum = 0,ioSum=0, iCnt = 0;
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			if((Arr[iCnt]%2==0))
			{
				ieSum = ieSum + Arr[iCnt];	
			}
			else if((Arr[iCnt]%2)!=0)
			{
				ioSum = ioSum + Arr[iCnt];
			}
		}
		return (ieSum - ioSum);
	}
}