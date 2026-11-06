class Solution {
public:
    string longestPalindrome(string s) {

        if(s.length()==0)
            return "";
        vector<string> output(s.length(),"");
        output[0]=s[0];

        for(int i=1;i<s.length();++i)
        {
            output[i]=output[i-1];
            for(int j=0;j<i;++j)
            {
                if(s[j]==s[i])
                {
                    int k=j;
                    int l=i;
                    while(s[k]==s[l])
                    {
                        if(s[k]==s[l])
                        {
                            k++;
                            l--;
                        }
                    }
                    if(k>l)
                    {
                        if((i-j+1)>output[i-1].length())
                        {
                            size_t start = j;
                            size_t length = i-j+1;
                            output[i] = s.substr(start,length);
                        }
                    }
                        
                }
            }
        }
        return output[s.length()-1];
    }
};
