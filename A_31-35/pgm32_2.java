/*
2. Write Java program which accept N numbers from user and display 
all such elements which are divisible by 5.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 85 80
*/
import java.util.*;


class pgm32_2
{
	public static void main(String args[])
	{
		int i=0,iNo=0;

		Scanner sobj = new Scanner(System.in);

		System.out.println("ENter the number of elements:");
		iNo = sobj.nextInt();

		Marvellous mobj = new Marvellous(iNo);
		mobj.Accept();
		mobj.Display();
		System.out.print("Output: ");
		mobj.DisplayNumber();
	}
}

class ArrayX
{
	int Arr[];

	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
	}

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		int iCnt=0;
		System.out.println("Enter elements: ");
		for(iCnt=0 ; iCnt < Arr.length ; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}

	public void Display()
	{
		int iCnt=0;
		System.out.print("Elements are: ");
		for(iCnt=0 ; iCnt<Arr.length ; iCnt++)
		{
			System.out.print(Arr[iCnt]+ "\t");
		}
		System.out.println(" ");
	}

}

class Marvellous extends ArrayX
{
	public Marvellous(int iValue)
	{
		super(iValue);
	}

	public void DisplayNumber()
	{
		int iCnt=0;
		for(iCnt =0 ; iCnt<Arr.length ; iCnt++)
		{
			if((Arr[iCnt]%5)==0)
			{
				System.out.print(Arr[iCnt]+ "\t");
			}
		}

	}
} 