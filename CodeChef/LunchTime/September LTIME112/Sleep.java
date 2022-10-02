import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
			Scanner s = new Scanner(System.in);
    	int tc =s.nextInt();
		while(tc-->0){
		   int sleep =s.nextInt();
		   if(sleep<7){
		       System.out.println("YES");
		   }else{
		       System.out.println("NO");
		   }
		}
	}
}
