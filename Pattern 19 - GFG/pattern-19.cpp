//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        //upper half
        for(int i=0;i<n;i++)
        {
            //star
            for(int j=n-i-1;j>=0;j--)
            cout<<"*";
            
            //space
            for(int j=2*i;j>0;j--)
            cout<<" ";
            
            //star
            for(int j=n-i-1;j>=0;j--)
            cout<<"*";
            
            cout<<endl;
        }
        //lower half
        for(int i=0;i<n;i++)
        {
            //star
            for(int j=0;j<=i;j++)
            cout<<"*";
            
            //space
            for(int j=2*(n-i-1);j>0;j--)
            cout<<" ";
            
            //star
            for(int j=0;j<=i;j++)
            cout<<"*";
            
            cout<<endl;
            
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends