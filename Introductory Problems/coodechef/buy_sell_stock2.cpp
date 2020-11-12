#include<bits/stdc++.h>
using namespace std;
string find_min_days(vector<int> &profit, vector<int> &price)
{
	//Participants code will be here
	string output = "";
	unordered_map<int,int> mp;
    vector<pair<string,int>> out(profit.size(),make_pair("",-1));
	for(int i=0;i<price.size();i++)
	{
	    int temp = price[i];
	    for(int j=0;j<profit.size();j++)
	    {
	        if(temp>profit[j])
	        {
	            if(mp.find(temp-profit[j])!=mp.end())
	            {
                    int gap =(i+1)-mp[temp-profit[j]];
                    if(out[j].second!=-1)
                    {
                        if(gap<out[j].second)
                        {
                            out[j] = make_pair(to_string(mp[temp-profit[j]])+" "+to_string(i+1)+",",gap);
                        }
                    }
                    else
                    {
                        out[j] = make_pair(to_string(mp[temp-profit[j]])+" "+to_string(i+1)+",",gap);
                    } 
	            }
	        }
	    }
	        mp[temp] = i+1;

	}
    for(auto i:out)
    {
        if(i.first=="")
        output+="-1,";
        else
        output+=i.first;
    }
	if(output.length()>0)
	output[output.length()-1] = ' ';
    return output;

}

int main ()
{
	int n,d,i;
	string answer="";
	cin>>n>>d;
	vector<int> price(n);
	vector<int> profit(d);
	for (i=0;i<n;i++)
		cin>>price[i];
	for (i=0;i<d;i++)
	    cin>>profit[i];
    answer = find_min_days(profit,price);

    // Do not remove below line
	cout<<answer<<endl;
    // Do not print anything after this line

	return 0;
}