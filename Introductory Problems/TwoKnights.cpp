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
    //a(n) = (n - 1)(n + 4)(n^2 - 3n + 4)/2
    int n;
    cin>>n;
    ll i,temp1,temp2,temp3;
    ll ans;
    REP(i,1,n)
    {
        if(i%2==0)
        {
            cout<<((i - 1)*((i + 4)/2)*(i*i - 3*i + 4))<<endl;
        }
        else
        {
            cout<<((i - 1)/2)*(i + 4)*(i*i - 3*i + 4)<<endl;
        }
        
        
    }
return 0;
}