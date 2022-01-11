import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while ((t--)!=0){   //test cases~
		    long n = sc.nextInt();   //taking number~
		    long root = Math.round(Math.sqrt(n));   //rounded off root~
		    System.out.println(root);
		}
	}
}
