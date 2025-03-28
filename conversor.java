import java.lang.Math;
public class Main
{
	public static void main(String[] args) {
		char[] exp = {'2','7'};
		double x = 0;
		double op = 0;
		double soma = 0;
		int y = exp.length-1;
		for (int i = 0;i<exp.length;i++){
		    x = exp[i] - '0';
		    op = x*(Math.pow(10,y));
		    y--;
		    soma += op;
		}
		System.out.println(soma);
	}
}
