class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count_s;
        unordered_map<char, int> count_t;
        
        if (s.length() != t.length())
            return false;
        for (int i=0; i< s.length(); ++i)
        {
            if(count_s.find(s[i]) != count_s.end())
                count_s[s[i]] ++;
            else
                count_s[s[i]] = 1;

            if(count_t.find(t[i]) != count_t.end())
                count_t[t[i]] ++;
            else
                count_t[t[i]] = 1;
        }
        if (count_s == count_t)
            return true;
        return false;
    }
};
