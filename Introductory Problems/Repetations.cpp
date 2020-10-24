#include<bits/stdc++.h>
using namespace std;


int main()
{
    int max1=0, temp=0;
    string s;
    cin>>s;
    char c = 'A'; /// initialize it any thing as first match results in else part of the loop.
    //dont use two loops if you can iterate in one loop itself.
    
    for(char d:s)
    {
        if(d==c)
        {
            temp++;
            max1 = max(temp,max1);
        }
        else
        {
            temp = 1;
            c = d;
        }
        
    }
    cout<<max1<<" ";
    return 0;
}