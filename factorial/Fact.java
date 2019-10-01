import javax.swing.*;

public class Fact {
	public static void main(String[] args) {
		final int inputNumber = Integer.parseInt(JOptionPane.showInputDialog(null, "Please type a number to calculate its factorial"));
		int cloneInputNumber = inputNumber;
		long result = 1;
		while (cloneInputNumber > 1){
			result *= cloneInputNumber--;
		}
		JOptionPane.showMessageDialog(null, "The result of " + inputNumber + "! is: " + result);
	}
}
