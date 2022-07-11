//https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1#
// { Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        //using character array
        //TC->O(s.length())  SC->O(no. of diff characters)
        int n=str1.length();
        int m=str2.length();
        if(n!=m)//base case
        {
            return false;
        }
        int m1[256]={0};//map<char,char> m1
        int m2[256]={0};//map<char,char> m2
        for(int i=0;i<n;i++)
        {
            if(!m1[str1[i]] && !m2[str2[i]])//mapping of that char not done
            {
                m1[str1[i]]=str2[i];//s2[i] hashed value of m1[s1[i]]
                m2[str2[i]]=str1[i];
            }
            else if(m1[str1[i]]!=str2[i])//hashed value of m1[s1[i]] is not mapped 
            {                        //to s2[i] cuz m1[s1[i]] mapped to 
                return false;        //another s2[i]
            }
        }
        return true;
        
        // Your code here
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends
