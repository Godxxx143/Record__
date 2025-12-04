import java.util.Scanner;
public class StringManipulation {
                   }
public static void main(String[] args) {
Scanner scanner = new Scanner(System.in);
System.out.print("Enter the first string: ");
String str1 = scanner.nextLine();
System.out.print("Enter the second string: ");
String str2 = scanner.nextLine();
String concatenated = str1 + " " + str2;
System.out.println("\nConcatenated String: " + concatenated);
if (str1.equals(str2)) {
System.out.println("The strings are equal.");
} else {
System.out.println("The strings are not equal.");
}
System.out.println("First string in uppercase: " + str1.toUpperCase());
System.out.println("Second string in lowercase: " + str2.toLowerCase());
String reversed = new StringBuilder(str1).reverse().toString();
System.out.println("Reversed first string: " + reversed);
scanner.close();
}
}
