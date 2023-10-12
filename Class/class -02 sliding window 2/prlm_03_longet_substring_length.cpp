//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int n = s.size();
    int i=0, j=0,unq =0;
    int frq[26]={0};
    int mx =-1;
    while(j<n)
    {
        frq[s[j]-'a']++;
        if(frq[s[j]-'a']==1)
        {
            unq++;
        }
        while(unq>k)
        {
            frq[s[i]-'a']--;
            if(frq[s[i]-'a']==0)
            {
                unq--;
            }
            i++;
        }
        if(unq==k)
        {
            mx = max(mx,j-i+1);
        }
        j++;
    }
    return mx;
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends