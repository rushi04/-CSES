// string hashing 
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

ll hash_function(string s)
{
    ll hash_value = 0;
    int p = 31;
    ll p_pow = 1;
    ll m = 1e9 + 9;
    int i=1;
    for(char c:s)
    {
        hash_value+=( (c-'a'+1)*p_pow )%m;
        p_pow  = (p_pow*p)%m;
        // for every character we can also store this hash value so that for substrings it becomes easier.
    }
}
int main()
{

    return 0;
}