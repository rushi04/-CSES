#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<long long,long long> pl;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,k,q,u,v,special,count,source;
        
        // two ways of graph representation 
        // 1.) adj matrix - adj[n+1][n+1]
        // 2.) adj list - 2.1) vector<int> adj[n+1] - n+1 vectors 2.2) vector<vector<int>> adj(n+1)

        cin>>n>>m>>k;
        vector<vector<int>> adj(n+1);
        set<ll> s;
        REP(i,0,m)
        {
            cin>>u>>v;
            adj[u].PB(v);
            adj[v].PB(u);
        }
        vector<int> special_nodes(n+1,0);
        queue<ll> q;
        REP(i,0,k)
        {
            cin>>special;
            special_nodes[special] = 1;
            s.insert(special);
            q.push(special);
        }
        count = k;
        // bfs
        vl d(n+1,INT_MAX);
        vector<bool> visited(n+1,false);
        // select some source for bfs 
        while(count--)
        {
            source = s[0];
            used[source] = true;
            d[source] = 0;
            count--;
            set.erase(s.begin());
            while(!q.empty())
            {
                ll u = q.front();
                q.pop();
                for(ll v:adj[u])
                {
                    q.push(v);
                    used[v] true;
                    if(special_nodes[v])
                    {
                        s.erase(s.find(v));
                        d[v] = 0;  
                    }
                    else
                    d[v] = d[u] + 1;
                }
            }
        }
        cin>>q;
        REP(i,0,q)
        {
            cin>>source;
            

        }



    }
    return 0;
}