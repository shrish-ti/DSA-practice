#include <bits/stdc++.h>
using namespace std;

struct comp { 
    constexpr bool operator()( pair<char, int> const a, pair<char, int> const b) 
        const noexcept 
    { 
        return a.second > b.second; 
    } 
}; 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    unordered_map <char,int> um;
	    for(int i=0; i<s.length(); i++)
	    {
	        if(um.find(s[i])==um.end())
	        um.insert({s[i],1});
	        else
	        ++um[s[i]];
	    }
	    priority_queue <pair<char,int>, vector<pair<char,int> >, comp > pq(um.begin(),um.end());
	    pair<char,int> temp={'#',-1};
	    string res="";
	    while(!pq.empty())
	    {
	        res+=(pq.top().first);
	        int x=pq.top().second;
	        --x;
	        if(temp.first!='#'&&temp.second>0)
	        {
	            pq.push(temp);
	        }
	        temp={pq.top().first,x};
	        pq.pop();
	    }
	    if(res.length()!=s.length())
	    cout<<0<<endl;
	    else
	    cout<<1<<endl;
	}
}
