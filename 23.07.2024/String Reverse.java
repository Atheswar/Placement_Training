import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String A = sc.next();
        sc.close();
        
        boolean isPalindrome = true;
        for (int i = 0; i < A.length() / 2; i++) {
            if (A.charAt(i) != A.charAt(A.length() - i - 1)) {
                isPalindrome = false;
                break;
            }
        }
        
        System.out.println(isPalindrome ? "Yes" : "No");
    }
}
