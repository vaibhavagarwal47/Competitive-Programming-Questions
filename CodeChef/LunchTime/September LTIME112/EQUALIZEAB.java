import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
			Scanner sc = new Scanner(System.in);
		int c =sc.nextInt();
		while(c-->0){
		   
		    int n =sc.nextInt();
		    int m =sc.nextInt();
		    int p =sc.nextInt();
		    
		   
		        int x = Math.abs(m-n);
		    if(x%(2*p)==0){
		        System.out.println("YES");
		    }else{
		        System.out.println("NO");
		    }
		    
		    
		}
	}
}
