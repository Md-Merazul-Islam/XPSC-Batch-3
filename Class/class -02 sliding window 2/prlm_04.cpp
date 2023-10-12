#include <bits/stdc++.h>

using namespace std;
int longestSubstrDistinctChars (string s)
{
    // your code here
    int n = s.size();
    int mx =0; 
    map<char,int>mp;
    int  j=0;
    for(int i=0; i<n;i++)
    {
      
        if(mp.find(s[i]) != mp.end() && mp[s[i]]>=j)
        {
            j = mp[s[i]]+1;
        }
        mp[s[i]]= i;
        mx= max(mx, i- j+1);
    }
    return mx;
    
}