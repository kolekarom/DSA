class Solution {
  public int countConsistentStrings(String allowed, String[] words) {
    var map = new boolean[26];
    var res = words.length;

    for (var c : allowed.toCharArray())
      map[c - 'a'] = true;

    for (var word : words) {
      for (var c : word.toCharArray()) {
        if (!map[c - 'a']) {
          res--;
          break;
        }
      }
    }
    return res;
  }
}
public class consistentString {
  public static void main(String[] args) {
    Solution solution = new Solution();
    String allowed = "ab";
    String[] words = {"ad", "bd", "aaab", "baa", "badab"};
    int result = solution.countConsistentStrings(allowed, words);
    System.out.println(result); // Output: 2
  }
}