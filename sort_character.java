import java.util.*;
class Solution {
    public String frequencySort(String s) {
        int[] f = new int[128];
        for (int i = 0; i < s.length(); i++) {
            f[s.charAt(i)]++; 
        }
        List<Character> ss = new ArrayList<>();
        for (int i = 0; i < s.length(); i++) {
            ss.add(s.charAt(i));
        }
        ss.sort((a, b) -> {
            if (f[b] != f[a]) {
                return f[b] - f[a];
            }
            return b - a; 
        });

        StringBuilder r = new StringBuilder();
        for (char c : ss) {
            r.append(c);
        }
        return r.toString();
    }
}
