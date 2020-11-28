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

// dict: {"abc", "acd", "bcd", "def", "a", "aba"}
// prefix: "a" - > "a", "abc", "acd", "aba"
// prefix: "b" -> "bcd"

// trie data structure
/*
                0
               / \ \
              a   b d
             *     0 0
            / \
           b  c
*/
//then find the prefix 
struct node{
    bool end;
    string prefix;
    unordered_map<char, node> mp;
}trie;

int main()
{
    
    return 0;
}