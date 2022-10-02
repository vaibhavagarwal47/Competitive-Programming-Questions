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
		   int y =sc.nextInt();
		    int z=sc.nextInt();
		    if(z==0 || y==z){
		        System.out.println(0);
		    }else{
		        int a = y-z;
		        if(a<=z){
		            System.out.println(a);
		        }else{
		            System.out.println(z);
		        }
		    }
		}
	}
}
