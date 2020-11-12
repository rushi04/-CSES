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

void sortColors(vector<int>& nums) {
    int startindex = 0;
    int endindex = nums.size()-1;
    int i=0;
    while(i<endindex)
    {
        if(nums[i]==2)
        swap(nums[i],nums[endindex--]);

        if(nums[i]==0)
        {
            swap(nums[i],nums[startindex++]);
            i++;
        }
        else
        i++;
    }        
}
int main()
{
    // 1 0 2 1 0 1 1 1 0 0 2 2 
    // 1->5 0->4 2->3
    
    return 0;
}   