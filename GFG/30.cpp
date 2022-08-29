//https://leetcode.com/problems/isomorphic-strings/solution/

class Solution {
public:
    //Method 1:using map
    /*bool helper(string s,string t)
    {
        unordered_map<char,char> m;
        for(int i=0;i<s.size();i++)
        {
            if(m.find(s[i])!=m.end())//if we find that char in map
            {
                if(m[s[i]]!=t[i])//and it is not mapped to same char as it was
                {
                    return false;
                    
                }
            }
            //agar map mei wo element nhi milta
            else
            {
                m[s[i]]=t[i];//toh mapping kr do
                //mapping each char in str 's' to that in str 't'
                
            }
        }
        return true;
        
    }*/
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        //return helper(s,t) && helper(t,s);->part of method 1: map sol
        //Method 2:using two arrays
        int m1[256]={0},m2[256]={0};//initialised space is 256(as whole ascii size is 256)
        for(int i=0;i<s.size();i++)
        {
            if(m1[s[i]]!=m2[t[i]])
            {
                return false;
            }
            m1[s[i]]=i+1;
            m2[t[i]]=i+1;
        }
        return true;
    }
};
