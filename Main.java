
import java.lang.*;
import java.util.*;

class PatternX
{
	public void Display(int iNo)
	{
		if(iNo < 0)
		{
			iNo = -iNo;
		}

		for(int i = 1; i <= iNo; i++)
		{
			System.out.print("*\t");
		}
		for(int i = 1; i <= iNo; i++)
		{
			System.out.print("#\t");
		}
		System.out.println();
	}
}

class Main
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number");
		int iValue = sobj.nextInt();

		PatternX pobj = new PatternX();
		pobj.Display(iValue);
	}
}