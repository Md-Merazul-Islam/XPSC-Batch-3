//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string p, string s) {
	    // code here
	    int k= p.size();
	    int fqp[26]={0};
	    for (char c : p)
	    {
	        fqp[c-'a']++;
	    }
	    int fqs[26]={0};
	    int ans=0, i=0,j=0;
	    while(j<s.size())
	    {
	        fqs[s[j]-'a']++;
	        
	        if(j>=k-1){
	            bool flag = true;
	            for (int t=0; t<26; t++)
	            {
	                if(fqp[t]!= fqs[t])
	                {
	                    flag = false;
	                    break;
	                }
	            }
	            if(flag ) ans++;
	            fqs[s[i]-'a']--;
	            i++;
	        }
	        j++;
	    }
	    return ans ;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends