//DFS traversal iterative using stack
#include <bits/stdc++.h>
using namespace std;
vector <int> dfs(vector<int> g[n],int n)
{
vector <int> res;
res.push_back(0);
stack <int> s;
s.push(0);
bool visited[N];
fill(visited,visited+N, 0);
visited[0]=1;
int k=s.top();
int c;
for(int i=0; i<g[k].size(); i++)
{
c=0;
  if(!visited[g[k][i]])
  {
   s.push(g[k][i]);
   visited[g[k][i]]=1;
   res.push_back(g[k][i]);
   ++c;
  }
if(c==0)
s.pop();
}
return res;
}
int main()
{
int n,e;
cin>>n>>e;
vector<vector<int>>g[n];
int t1,t2;
for(int i=0; i<e; i++)
{
cin>>t1>>t2;
g[t2].push_back(t1);
g[t1].push_back(t2);
}

}
