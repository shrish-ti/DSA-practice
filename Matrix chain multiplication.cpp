#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    int c[n][n];
	    for(int i=0; i<n; i++)
	    c[i][i]=0;
	    int j;
	    for(int s=1; s<=n-1; s++)
	    {
	        for(int i=0; i<n-s; i++)
	        {
	            j=i+s;
	            int mini=INT_MAX;
	            for(int l=i; l<j; l++)
	            {
	                int temp=c[i][l]+c[l+1][j]+arr[i]*arr[j+1]*arr[l+1];
	                mini=min(temp,mini);
	            }
	            c[i][j]=mini;
	        }
	    }
	    cout<<c[0][n-2]<<endl;
	}
	return 0;
}
