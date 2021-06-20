//Fibonacci Series up to n terms

import java.util.*;
public class fibanocci {

	public static void main(String[] args) {
		int n, i, n1=0, n2=1,next;
        Scanner sc = new Scanner(System.in);
        System.out.print("Input Number of Digits.. ");
        n = sc.nextInt();
        sc.close();
	for(i=1; i<=n; i++){
            System.out.print(n1 + " ");
            next = n1+n2;
            n1=n2;
            n2=next;    
        }
       
   }

}
