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
    // maximize the no of 0's
    // just find the subarray with maximum diff of 1 and 0.
    // count0 = 11
    // 0 1 0 0 1 1 0 1 1 0 0 1 1 1 1 0 0 1 1 1 1 1 1 1 1 0 0 0 
    // ! 1 ! @ 1 2 1 2 3 2 1 2 3 4 5 4 3 4 5 6 7 8 9 10 11 10 9 8
    // 0 1 1 1 1 2 2 2 3 3 3 3 3 4 5 5 5 5 5 6 7 8 9 10 11 11 11 11
    // 22

    bool arr[] = {0, 1, 0, 0, 1, 1, 0};
    int n = sizeof(arr)/sizeof(int);
    vector<pair<int,int>> out;
    int max =0;
    int curr = 0;
    for(int i =0;i<n;i++)
    {
        int val = (arr[i] == 1)? 1 : -1;
        if(val>curr)
        {
            curr =val;
        }
        else
        {
            curr += val;
        }
        if(max<curr)
        max = curr;
        out.push_back(make_pair(curr,max));
        cout<<max;
    }

    return 0;

}