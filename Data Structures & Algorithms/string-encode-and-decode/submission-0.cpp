class Solution {
public:

    string encode(vector<string>& strs) {
        string word = "";
        for (string s : strs)
        {
            word += s;
            word += '|';
        }
        return word;
    }

    vector<string> decode(string s) {
        vector<string> words = {};
        int n= s.length();
        int i = 0;
        while (i <= n-1)
        {
            string word = "";
            while(s[i] != '|')
            {
                word += s[i];
                i++;
            }
            i++;
            words.push_back(word);

        }
        return words;
    }
};
