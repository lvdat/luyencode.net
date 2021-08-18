import java.util.Scanner;
import java.lang.Math;
public class Main {
	public static int us(int a, int b){
		if(b == 0){
			return a;
		}else{
			return us(b, a % b);
		}
	}
	public static void main(String[] args) {
      	Scanner sc = new Scanner(System.in);
      	int a = sc.nextInt();
		int b = sc.nextInt();
        System.out.print(us(Math.abs(a),Math.abs(b)));
	}
}