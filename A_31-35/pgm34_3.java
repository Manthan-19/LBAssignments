/*
3. Write java program which accept N numbers from user and accept 
one another number as NO , return index of last occurrence of that NO.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 3

Input : N : 6
NO: 93
Elements :85 66 3 66 93 88
Output : 4

Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : -1

*/
import java.util.*;

class pgm34_3
{
	public static void main(String args[])
	{
		
		int iRet = 0;


		Marvellous mobj = new Marvellous();
		mobj.Accept();
		mobj.Display();
		iRet = mobj.LastOcc();

		System.out.print("Output : "+iRet);
		
	}
}

class NumberX
{
	public int Arr[];
	public int iValue=0;
	

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		int iCnt = 0;

		System.out.println("Enter number of elements: ");
		iValue = sobj.nextInt();

		Arr = new int[iValue];

		
		
		System.out.println("Enter elements");
		
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}

	public void Display()
	{
		int iCnt=0;
		System.out.println("Entered elements are: ");
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt] +"\t");
		}
	}
	

}

class Marvellous extends NumberX
{
	
	public int LastOcc()
	{
		// Logic
		Scanner sobj = new Scanner(System.in);
		int i=0,iIndex=0,iNumber=0;
		boolean bAns=false;
		
		System.out.println("Enter number : ");
		iNumber = sobj.nextInt();
		
		for(i=0 ; i<Arr.length ; i++)
		{
			if(Arr[i] == iNumber)
			{
				iIndex = i;
			}
			else
			{
				iIndex = -1;
			}
			
		}
		return iIndex;
	}
}