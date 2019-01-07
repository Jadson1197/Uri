package pkg1003;

import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int A,B,Soma;
		
		Scanner scan = new Scanner(System.in);
		A = scan.nextInt();
		B = scan.nextInt();
		
		Soma = A+B;
		scan.close();
		System.out.println("SOMA = "+Soma);
				
    }
    
}
