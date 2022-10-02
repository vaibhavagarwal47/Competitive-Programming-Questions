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
		   
		    int p=sc.nextInt();
		    int q=sc.nextInt();
		    
		    if(p%q==0){
		        System.out.println(0);
		    }else{
		        System.out.println(1);
		    }
		}
	}
}
