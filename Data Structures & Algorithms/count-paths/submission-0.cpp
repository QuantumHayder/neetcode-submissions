class Solution {
private:
void tryDec(int m, int n,pair<int,int>benchMark ,int&c)
{
    if(m>benchMark.first || n>benchMark.second)
        return;
    if(m == benchMark.first && n == benchMark.second)
        ++c;
    tryDec(m+1,n,benchMark,c);
    tryDec(m,n+1,benchMark,c);
    
}
public:
    int uniquePaths(int m, int n) {
        int c=0;
        pair<int,int>benchMark = make_pair(m-1,n-1);
        tryDec(0,0,benchMark,c);
        return c;
    }
};
