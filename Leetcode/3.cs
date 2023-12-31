public class Solution {
    public int LengthOfLongestSubstring(string s) {
        List<int> list = new List<int>();
        List<char> charList = new List<char>();
        
        for(int i=0; i<s.Length; i++) {
            int count = 0;
            charList.Clear();
            bool added = false;

            for(int j=i; j<s.Length; j++) {
                if(charList.Contains(s[j])) {
                    list.Add(count);
                    added = true;
                    break;
                } else {
                    charList.Add(s[j]);
                    count++;
                }
            }
            
            if (!added) {
                list.Add(count);
            }
        }
        
        if (list.Count == 0) {
            return 0;
        }
        
        list.Sort();
        list.Reverse();
        return list[0];
    }
}