class Solution {
    public int findMax(int[] freq) {
        int cnt = 0;
        for (int i = 0; i < freq.length; i++) {
            cnt = Math.max(cnt, freq[i]);
        }
        return cnt;
    }

    public int characterReplacement(String s, int k) {
        int low = 0;

        int n = s.length();
        int res = Integer.MIN_VALUE;
        int[] freq = new int[26];

        for (int high = 0; high < n; high++) {

            freq[s.charAt(high) - 'A']++;
            int len = high - low + 1;
            char ch = s.charAt(high);
            int maxlen = findMax(freq);
            int diff = len - maxlen;

            while (diff > k) {
                freq[s.charAt(low) - 'A']--;
                low++;
                len = high - low + 1;
                ch = s.charAt(high);
                maxlen = findMax(freq);
                diff = len - maxlen;
            }
            len = high - low + 1;
            res = Math.max(res, len);
        }
        return res;
    }
}