import java.util.Arrays;
import java.util.Scanner;

public class Main{

	public static void main (String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		for(int i=0;i<n;i++) 
		{
		    String output = "";
		    int odd=0,even=0;
			int m = input.nextInt();
			int[] array = new int[m];
			for (int j = 0; j < m; j++) {
				 array[j] = input.nextInt();
				 if(array[j]%2 == 1)
					 odd++;
				 else 
				     even++;
			}
			if (even%2==0 && odd%2==0) {
				output += "YES\n";
			}
			else if(even%2==odd%2)
			{
				Arrays.sort(array);
				int ap=0;
				for (int k = 0; k < m-1; k++) 
				{
					int adjacent = array[k+1] - array[k];
					if (adjacent == 1) 
					{
						ap=1;
						break;
					}
				}
				if(ap==1)
				    output="YES\n";
				else
				    output="NO\n";
				
			}
			else
			{
			    output="NO\n";
			}
			
			System.out.println(output);
		}
		
	}
}
