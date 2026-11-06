class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> output;
        
        int n = strs.size();
        vector<bool> used(n, false);
        
        for (int i=0; i<n; ++i)
        {
            if(used[i] == false)
            {
                //input[strs[i]] = true;
                vector<string> currentOutput = {strs[i]};
                for (int j=i+1; j<n; ++j)
                {
                    if (strs[i].length() != strs[j].length())
                        continue;
                    else
                    {
                        unordered_map<char,int> imap = {};
                        unordered_map<char,int> jmap = {};
                        for(int k = 0; k< strs[i].length(); ++k)
                        {
                            imap[strs[i][k]]++;
                            jmap[strs[j][k]]++;
                        }
                        if (imap == jmap && used[j] == false)
                        {
                            currentOutput.push_back(strs[j]);
                            used[j] = true;
                            //strs.erase(strs.begin()+j);
                        }
                    }
                }
                output.push_back(currentOutput);
            }
            
        }
        return output;
    }
};
