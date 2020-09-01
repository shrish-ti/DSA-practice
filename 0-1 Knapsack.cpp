#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,b;
        cin>>n>>b;
        int v[n], w[n];
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>w[i];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(w[i]>w[j])
                {
                    swap(w[i],w[j]);
                    swap(v[i],v[j]);
                }
            }
        }
        int dp[n][b+1];
        for(int i=0; i<n; i++)
        {
            dp[i][0]=0;
        }
        for(int j=0; j<b+1; j++)
        {
            if(w[0]<=j)
            dp[0][j]=v[0];
            else
            dp[0][j]=0;
        }
        for(int i=1; i<n; i++)
        {
            for(int j=1; j<b+1; j++)
            {
                if(w[i]<=j)
                dp[i][j]=max(v[i]+dp[i-1][j-w[i]],dp[i-1][j]);
                else
                dp[i][j]=dp[i-1][j];
            }
        }
        /*for(int i=0; i<n; i++)
        {
            for(int j=0; j<b+1; j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }*/
        cout<<dp[n-1][b]<<endl;
    }
}
