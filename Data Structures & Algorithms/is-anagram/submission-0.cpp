class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length())
            return false;

        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;

        for(char c: s)
        {
            if(smap.find(c) == smap.end())
                smap[c]=1;
            else
                smap[c]++;
        }
        for(char c: t)
        {
            if(tmap.find(c) == tmap.end())
                tmap[c]=1;
            else
                tmap[c]++;
        }

        for(int i=0; i<s.length(); ++i)
        {
            if(smap[s[i]] != tmap[s[i]])
                return false;
        }

        return true;
    }
};
