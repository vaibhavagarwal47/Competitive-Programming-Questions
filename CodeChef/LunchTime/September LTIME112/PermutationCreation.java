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
		   
		    int f =sc.nextInt();
		    
		    if(f<4){
		        System.out.println(-1);
		    }else{
		        for(int i=2;i<=f;i+=2)
		        System.out.print(i + " ");
		        
		         for(int i=1;i<=f;i+=2)
		        System.out.print(i + " ");
		    }
		}
	}
}
