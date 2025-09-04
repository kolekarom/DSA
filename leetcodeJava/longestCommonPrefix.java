import java.util.Scanner;

public class longestCommonPrefix {
    public String LongestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) {
            return "";
        }

        String pre = strs[0];
        int preLen = pre.length();

        for (int i = 1; i < strs.length; i++) {
            String s = strs[i];
            while (preLen > s.length() || !pre.equals(s.substring(0, preLen))) {
                preLen--;
                if (preLen == 0) {
                    return "";
                }
                pre = pre.substring(0, preLen);
            }
        }
        return pre;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of strings: ");
        int n = sc.nextInt();

        if (n <= 0) {
            System.out.println("No strings entered!");
            return;
        }

        String[] strs = new String[n];
        System.out.println("Enter the strings: ");
        for (int i = 0; i < n; i++) {
            strs[i] = sc.next();
        }

        longestCommonPrefix lcp = new longestCommonPrefix();
        String res = lcp.LongestCommonPrefix(strs);
        System.out.println("The longest common prefix is: " + res);

        sc.close();
    }
}
