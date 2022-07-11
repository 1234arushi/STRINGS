//https://leetcode.com/problems/longest-common-prefix/solution/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(),strs.end());
        string LCP="";
        string first=strs[0];
        int n=strs.size();
        string last=strs[n-1];
        for(int i=0;i<first.size();i++)//i<last.size()
        {
            if(first[i]==last[i])
            {
                LCP.push_back(first[i]);
            }
            else
            {
                break;
            }
        }
        return LCP==" "?"-1":LCP;
        
        
    }
};
