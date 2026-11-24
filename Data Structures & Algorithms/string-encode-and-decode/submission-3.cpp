class Solution {
public:

    string encode(vector<string>& strs) {
        int n = strs.size();
        string res = "";
        for (const string& s : strs)
        {
            res.append(to_string(s.size()));
            res.push_back('#');
            res.append(s);
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int l = s.length();
        int i = 0;
        while(i<l)
        {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            j = i + length;
            strs.push_back(s.substr(i, length));
            i = j;
        }
        return strs;
    }
};
