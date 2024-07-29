//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    // sort(a.begin(),a.end());
    // vector<long long>ans;
    // for(int i=0;i<n;i++){
    //     vector<long long>v;
    //     if(m+i>n) break;
    //     for(int j=i;j<m+i;j++){
    //         // cout<<a[j];
    //         v.push_back(a[j]);
    //     }
    //     // cout<<endl;
    //     // for(auto it:v) cout<<it;
    //     // cout<<endl;
        
    //     int x=*max_element(v.begin(),v.end()) , y=*min_element(v.begin(),v.end()) ;
    //     ans.push_back(x-y);
    // }
    // return *min_element(ans.begin(),ans.end());
    // return 0;
    
    // optimised code
    sort(a.begin(),a.end());
    long long mini=INT_MAX;
    int l=0;
    int r=m-1;
    while(r<n){
        long long temp=a[r]-a[l];
        mini=min(temp,mini);
        r++;
        l++;
    }
    return mini;
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends