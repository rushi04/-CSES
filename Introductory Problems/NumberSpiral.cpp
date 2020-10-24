#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<long long,long long> pl;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll z = max(x,y);
        ll out = z*z;
        if(z%2==0)
        out = out - (y-1) - (z-x);
        else
        out = out - (x-1) - (z-y);
        cout<<out<<endl;
    }
     return 0;
}