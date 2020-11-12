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

//construct a trie data structure
struct node{
    bool isendofword;
    // array of 26 length 
    // vector<node*> arr[26];
    struct TrieNode *arr[26];  
    // any additional information according to the question
    // string prefix 
};

// insert function 
void insert_key(struct node *root, string key)
{
    struct node *temp = root;
    for(int i=0;i<key.length();i++)
    {
        int index = key[i] -'a';
        if(!temp->arr[index])
        {
            //create a new struct node whichis initialized
        }
    }
    return;
}
int main()
{
return 0;
}