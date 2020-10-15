#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a,b;
    cin>>a>>b;

    string lati = (a[(int)a.length()-1] == 's')?"South":"North";

    string longi = (b[(int)b.length()-1] == 'e')?"East":"West";

    vector<int>ch1(26,0);
    vector<int>ch2(26,0);

    for(int i = 0;i < (int)lati.length()-1;i++)
    {
    	 ch1[lati[i]-'a']++;
    }

    vector<int>aa;
    for(auto x : ch1)
    {
    	 if(x > 0)
    	 	aa.push_back(x);
    }

    for(int i = 0;i < (int)longi.length()-1;i++)
    {
    	ch2[longi[i]-'a']++;
    }

     vector<int>bb;
     
    for(auto x : ch2)
    {
    	 if(x > 0)
    	 	bb.push_back(x);
    }

    sort(aa.begin(),aa.end());

    sort(bb.begin(),bb.end());


    int ma = aa[0];int mxa = aa[aa.size()-1];
    int mb = bb[0];int mxb = bb[bb.size()-1];

    cout<<(mxa-ma)<<" "<<lati<<" "<<(mxb-mb)<<" "<<longi<<endl;
}


signed main(void)
{
    solve();
}

