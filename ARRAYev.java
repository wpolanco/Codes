import java.io.*;

public class ARRAYev
{
	public static void main (String []arg) throws IOException
	{
		int n,i;
		int []a = new int[100];
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.println("How Many Elements You Wants?");
		n=Integer.parseInt(br.readLine());
		
		System.out.print("Enter Array Elements : ");
		for ( i=0; i<n; i++)
		{
			if(a[i]%2 == 0) 
			{
            System.out.println(a[i]);
			}
		}
	}
}